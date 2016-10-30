/* Include file taken directly from glewinfo.c to have the ability to
   create an OpenGL context without other helpers; mainly used for self-testing
*/
/* ------------------------------------------------------------------------ */

struct createParams
{
#if defined(GLEW_OSMESA)
#elif defined(GLEW_EGL)
#elif defined(_WIN32)
  int         pixelformat;
#elif !defined(__APPLE__) && !defined(__HAIKU__) || defined(GLEW_APPLE_GLX)
  const char* display;
  int         visual;
#endif
  int         major, minor;  /* GL context version number */

  /* https://www.opengl.org/registry/specs/ARB/glx_create_context.txt */
  int         profile;       /* core = 1, compatibility = 2 */
  int         flags;         /* debug = 1, forward compatible = 2 */
};

#if defined(GLEW_EGL)
EGLDisplay  display;
EGLContext  ctx;

/* See: http://stackoverflow.com/questions/12662227/opengl-es2-0-offscreen-context-for-fbo-rendering */

GLboolean glewCreateContext (struct createParams *params)
{
  EGLDeviceEXT devices[1];
  EGLint numDevices;
  EGLSurface  surface;
  EGLint majorVersion, minorVersion;
  EGLint configAttribs[] = {
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RED_SIZE, 1,
        EGL_GREEN_SIZE, 1,
        EGL_BLUE_SIZE, 1,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT,
        EGL_NONE
   };
  static const EGLint contextAttribs[] = {
    EGL_CONTEXT_CLIENT_VERSION, 2,
    EGL_NONE
  };
  static const EGLint pBufferAttribs[] = {
    EGL_WIDTH,  128,
    EGL_HEIGHT, 128,
    EGL_NONE
  };
  EGLConfig config;
  EGLint numConfig;
  EGLBoolean pBuffer;

  PFNEGLQUERYDEVICESEXTPROC       queryDevices = NULL;
  PFNEGLGETPLATFORMDISPLAYEXTPROC getPlatformDisplay = NULL;
  PFNEGLGETERRORPROC              getError = NULL;
  PFNEGLGETDISPLAYPROC            getDisplay = NULL;
  PFNEGLINITIALIZEPROC            initialize = NULL;
  PFNEGLBINDAPIPROC               bindAPI    = NULL;
  PFNEGLCHOOSECONFIGPROC          chooseConfig = NULL;
  PFNEGLCREATEWINDOWSURFACEPROC   createWindowSurface = NULL;
  PFNEGLCREATECONTEXTPROC         createContext = NULL;
  PFNEGLMAKECURRENTPROC           makeCurrent = NULL;
  PFNEGLCREATEPBUFFERSURFACEPROC  createPbufferSurface = NULL;

  /* Load necessary entry points */
  queryDevices         = (PFNEGLQUERYDEVICESEXTPROC)       eglGetProcAddress("eglQueryDevicesEXT");
  getPlatformDisplay   = (PFNEGLGETPLATFORMDISPLAYEXTPROC) eglGetProcAddress("eglGetPlatformDisplayEXT");
  getError             = (PFNEGLGETERRORPROC)              eglGetProcAddress("eglGetError");
  getDisplay           = (PFNEGLGETDISPLAYPROC)            eglGetProcAddress("eglGetDisplay");
  initialize           = (PFNEGLINITIALIZEPROC)            eglGetProcAddress("eglInitialize");
  bindAPI              = (PFNEGLBINDAPIPROC)               eglGetProcAddress("eglBindAPI");
  chooseConfig         = (PFNEGLCHOOSECONFIGPROC)          eglGetProcAddress("eglChooseConfig");
  createWindowSurface  = (PFNEGLCREATEWINDOWSURFACEPROC)   eglGetProcAddress("eglCreateWindowSurface");
  createPbufferSurface = (PFNEGLCREATEPBUFFERSURFACEPROC)  eglGetProcAddress("eglCreatePbufferSurface");
  createContext        = (PFNEGLCREATECONTEXTPROC)         eglGetProcAddress("eglCreateContext");
  makeCurrent          = (PFNEGLMAKECURRENTPROC)           eglGetProcAddress("eglMakeCurrent");
  if (!getError || !getDisplay || !initialize || !bindAPI || !chooseConfig || !createWindowSurface || !createContext || !makeCurrent)
    return GL_TRUE;

  pBuffer = 0;
  display = EGL_NO_DISPLAY;
  if (queryDevices && getPlatformDisplay)
  {
    queryDevices(1, devices, &numDevices);
    if (numDevices==1)
    {
      /* Nvidia EGL doesn't need X11 for p-buffer surface */
      display = getPlatformDisplay(EGL_PLATFORM_DEVICE_EXT, devices[0], 0);
      configAttribs[1] = EGL_PBUFFER_BIT;
      pBuffer = 1;
    }
  }
  if (display==EGL_NO_DISPLAY)
  {
    /* Fall-back to X11 surface, works on Mesa */
    display = getDisplay(EGL_DEFAULT_DISPLAY);
  }
  if (display == EGL_NO_DISPLAY)
    return GL_TRUE;

  eglewInit(display);

  if (bindAPI(EGL_OPENGL_API) != EGL_TRUE)
    return GL_TRUE;

  if (chooseConfig(display, configAttribs, &config, 1, &numConfig) != EGL_TRUE || (numConfig != 1))
    return GL_TRUE;

  ctx = createContext(display, config, EGL_NO_CONTEXT, pBuffer ? contextAttribs : NULL);
  if (NULL == ctx)
    return GL_TRUE;

  surface = EGL_NO_SURFACE;
  /* Create a p-buffer surface if possible */
  if (pBuffer && createPbufferSurface)
  {
    surface = createPbufferSurface(display, config, pBufferAttribs);
  }
  /* Create a generic surface without a native window, if necessary */
  if (surface==EGL_NO_SURFACE)
  {
    surface = createWindowSurface(display, config, (EGLNativeWindowType) NULL, NULL);
  }
#if 0
  if (surface == EGL_NO_SURFACE)
    return GL_TRUE;
#endif

  if (makeCurrent(display, surface, surface, ctx) != EGL_TRUE)
    return GL_TRUE;

  return GL_FALSE;
}

void glewDestroyContext ()
{
  if (NULL != ctx) eglDestroyContext(display, ctx);
}

#elif defined(GLEW_OSMESA)
OSMesaContext ctx;

static const GLint osmFormat = GL_UNSIGNED_BYTE;
static const GLint osmWidth = 640;
static const GLint osmHeight = 480;
static GLubyte *osmPixels = NULL;

GLboolean glewCreateContext (struct createParams *params)
{
  ctx = OSMesaCreateContext(OSMESA_RGBA, NULL);
  if (NULL == ctx) return GL_TRUE;
  if (NULL == osmPixels)
  {
    osmPixels = (GLubyte *) calloc(osmWidth*osmHeight*4, 1);
  }
  if (!OSMesaMakeCurrent(ctx, osmPixels, GL_UNSIGNED_BYTE, osmWidth, osmHeight))
  {
      return GL_TRUE;
  }
  return GL_FALSE;
}

void glewDestroyContext ()
{
  if (NULL != ctx) OSMesaDestroyContext(ctx);
}

#elif defined(_WIN32)

HWND wnd = NULL;
HDC dc = NULL;
HGLRC rc = NULL;

GLboolean glewCreateContext (struct createParams* params)
{
  WNDCLASS wc;
  PIXELFORMATDESCRIPTOR pfd;
  /* register window class */
  ZeroMemory(&wc, sizeof(WNDCLASS));
  wc.hInstance = GetModuleHandle(NULL);
  wc.lpfnWndProc = DefWindowProc;
  wc.lpszClassName = "GLEW";
  if (0 == RegisterClass(&wc)) return GL_TRUE;
  /* create window */
  wnd = CreateWindow("GLEW", "GLEW", 0, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
                     CW_USEDEFAULT, NULL, NULL, GetModuleHandle(NULL), NULL);
  if (NULL == wnd) return GL_TRUE;
  /* get the device context */
  dc = GetDC(wnd);
  if (NULL == dc) return GL_TRUE;
  /* find pixel format */
  ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));
  if (params->pixelformat == -1) /* find default */
  {
    pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
    params->pixelformat = ChoosePixelFormat(dc, &pfd);
    if (params->pixelformat == 0) return GL_TRUE;
  }
  /* set the pixel format for the dc */
  if (FALSE == SetPixelFormat(dc, params->pixelformat, &pfd)) return GL_TRUE;
  /* create rendering context */
  rc = wglCreateContext(dc);
  if (NULL == rc) return GL_TRUE;
  if (FALSE == wglMakeCurrent(dc, rc)) return GL_TRUE;
  if (params->major || params->profile || params->flags)
  {
    HGLRC oldRC = rc;
    int contextAttrs[20];
    int i;

    wglewInit();

    /* Intel HD 3000 has WGL_ARB_create_context, but not WGL_ARB_create_context_profile */
    if (!wglewGetExtension("WGL_ARB_create_context"))
      return GL_TRUE;

    i = 0;
    if (params->major)
    {
      contextAttrs[i++] = WGL_CONTEXT_MAJOR_VERSION_ARB;
      contextAttrs[i++] = params->major;
      contextAttrs[i++] = WGL_CONTEXT_MINOR_VERSION_ARB;
      contextAttrs[i++] = params->minor;
    }
    if (params->profile)
    {
      contextAttrs[i++] = WGL_CONTEXT_PROFILE_MASK_ARB;
      contextAttrs[i++] = params->profile;
    }
    if (params->flags)
    {
      contextAttrs[i++] = WGL_CONTEXT_FLAGS_ARB;
      contextAttrs[i++] = params->flags;
    }
    contextAttrs[i++] = 0;
    rc = wglCreateContextAttribsARB(dc, 0, contextAttrs);

    if (NULL == rc) return GL_TRUE;
    if (!wglMakeCurrent(dc, rc)) return GL_TRUE;

    wglDeleteContext(oldRC);
  }
  return GL_FALSE;
}

void glewDestroyContext ()
{
  if (NULL != rc) wglMakeCurrent(NULL, NULL);
  if (NULL != rc) wglDeleteContext(rc);
  if (NULL != wnd && NULL != dc) ReleaseDC(wnd, dc);
  if (NULL != wnd) DestroyWindow(wnd);
  UnregisterClass("GLEW", GetModuleHandle(NULL));
}

/* ------------------------------------------------------------------------ */

#elif defined(__APPLE__) && !defined(GLEW_APPLE_GLX)

#include <OpenGL/OpenGL.h>
#include <OpenGL/CGLTypes.h>

CGLContextObj ctx, octx;

GLboolean glewCreateContext (struct createParams *params)
{
  CGLPixelFormatAttribute contextAttrs[20];
  int i;
  CGLPixelFormatObj pf;
  GLint npix;
  CGLError error;

  i = 0;
  contextAttrs[i++] = kCGLPFAAccelerated; /* No software rendering */

  /* MAC_OS_X_VERSION_10_7  == 1070 */
  #if MAC_OS_X_VERSION_MIN_REQUIRED >= 1070
  if (params->profile & GL_CONTEXT_CORE_PROFILE_BIT)
  {
    if (params->major==3 && params->minor>=2)
    {
      contextAttrs[i++] = kCGLPFAOpenGLProfile;                                /* OSX 10.7 Lion onwards */
      contextAttrs[i++] = (CGLPixelFormatAttribute) kCGLOGLPVersion_3_2_Core;  /* 3.2 Core Context      */
    }
  }
  #endif

  contextAttrs[i++] = 0;

  error = CGLChoosePixelFormat(contextAttrs, &pf, &npix);
  if (error) return GL_TRUE;
  error = CGLCreateContext(pf, NULL, &ctx);
  if (error) return GL_TRUE;
  CGLReleasePixelFormat(pf);
  octx = CGLGetCurrentContext();
  error = CGLSetCurrentContext(ctx);
  if (error) return GL_TRUE;
  /* Needed for Regal on the Mac */
  #if defined(GLEW_REGAL) && defined(__APPLE__)
  RegalMakeCurrent(ctx);
  #endif
  return GL_FALSE;
}

void glewDestroyContext ()
{
  CGLSetCurrentContext(octx);
  CGLReleaseContext(ctx);
}

/* ------------------------------------------------------------------------ */

#elif defined(__HAIKU__)

GLboolean glewCreateContext (struct createParams *params)
{
  /* TODO: Haiku: We need to call C++ code here */
  return GL_FALSE;
}

void glewDestroyContext ()
{
  /* TODO: Haiku: We need to call C++ code here */
}

/* ------------------------------------------------------------------------ */

#else /* __UNIX || (__APPLE__ && GLEW_APPLE_GLX) */

Display* dpy = NULL;
XVisualInfo* vi = NULL;
XVisualInfo* vis = NULL;
GLXContext ctx = NULL;
Window wnd = 0;
Colormap cmap = 0;

GLboolean glewCreateContext (struct createParams *params)
{
  int attrib[] = { GLX_RGBA, GLX_DOUBLEBUFFER, None };
  int erb, evb;
  XSetWindowAttributes swa;
  /* open display */
  dpy = XOpenDisplay(params->display);
  if (NULL == dpy) return GL_TRUE;
  /* query for glx */
  if (!glXQueryExtension(dpy, &erb, &evb)) return GL_TRUE;
  /* choose visual */
  if (params->visual == -1)
  {
    vi = glXChooseVisual(dpy, DefaultScreen(dpy), attrib);
    if (NULL == vi) return GL_TRUE;
    params->visual = (int)XVisualIDFromVisual(vi->visual);
  }
  else
  {
    int n_vis, i;
    vis = XGetVisualInfo(dpy, 0, NULL, &n_vis);
    for (i=0; i<n_vis; i++)
    {
      if ((int)XVisualIDFromVisual(vis[i].visual) == params->visual)
        vi = &vis[i];
    }
    if (vi == NULL) return GL_TRUE;
  }
  /* create context */
  ctx = glXCreateContext(dpy, vi, None, True);
  if (NULL == ctx) return GL_TRUE;
  /* create window */
  /*wnd = XCreateSimpleWindow(dpy, RootWindow(dpy, vi->screen), 0, 0, 1, 1, 1, 0, 0);*/
  cmap = XCreateColormap(dpy, RootWindow(dpy, vi->screen), vi->visual, AllocNone);
  swa.border_pixel = 0;
  swa.colormap = cmap;
  wnd = XCreateWindow(dpy, RootWindow(dpy, vi->screen),
                      0, 0, 1, 1, 0, vi->depth, InputOutput, vi->visual,
                      CWBorderPixel | CWColormap, &swa);
  /* make context current */
  if (!glXMakeCurrent(dpy, wnd, ctx)) return GL_TRUE;
  if (params->major || params->profile || params->flags)
  {
    GLXContext oldCtx = ctx;
    GLXFBConfig *FBConfigs;
    int FBConfigAttrs[] = { GLX_FBCONFIG_ID, 0, None };
    int contextAttrs[20];
    int nelems, i;

    glxewInit();

    if (!glxewGetExtension("GLX_ARB_create_context"))
      return GL_TRUE;

    if (glXQueryContext(dpy, oldCtx, GLX_FBCONFIG_ID, &FBConfigAttrs[1]))
      return GL_TRUE;
    FBConfigs = glXChooseFBConfig(dpy, vi->screen, FBConfigAttrs, &nelems);

    if (nelems < 1)
      return GL_TRUE;

    i = 0;
    if (params->major)
    {
      contextAttrs[i++] = GLX_CONTEXT_MAJOR_VERSION_ARB;
      contextAttrs[i++] = params->major;
      contextAttrs[i++] = GLX_CONTEXT_MINOR_VERSION_ARB;
      contextAttrs[i++] = params->minor;
    }
    if (params->profile)
    {
      contextAttrs[i++] = GLX_CONTEXT_PROFILE_MASK_ARB;
      contextAttrs[i++] = params->profile;
    }
    if (params->flags)
    {
      contextAttrs[i++] = GLX_CONTEXT_FLAGS_ARB;
      contextAttrs[i++] = params->flags;
    }
    contextAttrs[i++] = None;
    ctx = glXCreateContextAttribsARB(dpy, *FBConfigs, NULL, True, contextAttrs);

    if (NULL == ctx) return GL_TRUE;
    if (!glXMakeCurrent(dpy, wnd, ctx)) return GL_TRUE;

    glXDestroyContext(dpy, oldCtx);

    XFree(FBConfigs);
  }
  return GL_FALSE;
}

void glewDestroyContext ()
{
  if (NULL != dpy && NULL != ctx) glXDestroyContext(dpy, ctx);
  if (NULL != dpy && 0 != wnd) XDestroyWindow(dpy, wnd);
  if (NULL != dpy && 0 != cmap) XFreeColormap(dpy, cmap);
  if (NULL != vis)
    XFree(vis);
  else if (NULL != vi)
    XFree(vi);
  if (NULL != dpy) XCloseDisplay(dpy);
}

#endif /* __UNIX || (__APPLE__ && GLEW_APPLE_GLX) */
