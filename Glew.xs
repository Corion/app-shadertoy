#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#define GLEW_STATIC
#include "windows.h"
/* This makes memory requirements balloon but makes building so much easier*/
#include <include/GL/glew.h>
#include <src/glew.c>

#include "const-c.inc"

MODULE = OpenGL::Glew		PACKAGE = OpenGL::Glew		

UV
glewInit(hwnd)
    UV hwnd;
CODE:
    printf("hwnd: %x\n", hwnd);
    glewExperimental = GL_TRUE; /* We want everything that is available on this machine */
	int attribs[] =
	{
		WGL_CONTEXT_MAJOR_VERSION_ARB, 3,
		WGL_CONTEXT_MINOR_VERSION_ARB, 1,
		WGL_CONTEXT_FLAGS_ARB, 0,
		0
	};
	
	HDC hDC = GetDC(hwnd);
	printf("Window DC: %d\n", hDC);

	HGLRC tempContext = wglCreateContext(hDC);
	if( ! tempContext) {
        printf("Couldn't create new temporary DC for window. Maybe the window already has an OpenGL DC connected to it?\n", tempContext);
        return;
    };
	HGLRC m_hrc;
	wglMakeCurrent(hDC,tempContext);
	
    if(wglewIsSupported("WGL_ARB_create_context") == 1) {
		m_hrc = wglCreateContextAttribsARB(hDC,0, attribs);
		wglMakeCurrent(NULL,NULL);
		wglDeleteContext(tempContext);
		wglMakeCurrent(hDC, m_hrc);
	} else {
	    //It's not possible to make a GL 3.x context. Use the old style context (GL 2.1 and before)
        printf("Fallback to 2.0 OpenGL context\n");
		m_hrc = tempContext;
	}
    printf("XS: __glewCreateShader is %x\n", __glewCreateShader);
    printf("%s\n", glGetString(GL_VERSION));
    RETVAL = glewInit();
    printf("XS: Initialized glew (%d)\n", RETVAL);
    printf("XS: __glewCreateShader is %x\n", __glewCreateShader);
OUTPUT:
    RETVAL

SV*
glewGetErrorString(err)
    GLenum err
CODE:
    RETVAL = newSVpv(glewGetErrorString(err),0);
OUTPUT:
    RETVAL

SV*
glewGetString(what)
    GLenum what;
CODE:
    RETVAL = newSVpv(glewGetString(what),0);
OUTPUT:
    RETVAL

SV*
glGetString(what)
    GLenum what;
CODE:
    RETVAL = newSVpv(glGetString(what),0);
OUTPUT:
    RETVAL

GLint
glCreateShader(what)
    GLint what;
CODE:
    if(! __glewCreateShader) {
        croak("glCreateShader not available on this machine");
    };
    printf("XS: Creating %d shader via %x\n", what, __glewCreateShader);
    RETVAL = glCreateShader(what);
    printf("XS: Created shader\n");
OUTPUT:
    RETVAL

GLenum
glGetError();
CODE:
    RETVAL = glGetError();
OUTPUT:
    RETVAL

GLboolean
glewIsSupported(name);
    char* name;
CODE:
    printf("%s\n", name);
    RETVAL = glewIsSupported(name);
    printf("%d\n", RETVAL);
OUTPUT:
    RETVAL


# This isn't a bad idea, but I postpone this API and the corresponding
# typemap hackery until later
#GLboolean
#glAreProgramsResidentNV_p(GLuint* ids);
#PPCODE:
#     SV* buf_res = sv_2mortal(newSVpv("",items * sizeof(GLboolean)));
#     GLboolean* residences = (GLboolean*) SvPV_nolen(buf_res);
#     glAreProgramsResidentNV(items, ids, residences);
#     EXTEND(SP, items);
#     int i2;
#     for( i2 = 0; i2 < items; i2++ ) {
#        PUSHs(sv_2mortal(newSViv(residences[i2])));
#	 };

INCLUDE: const-xs.inc
#INCLUDE: auto-xs.inc
