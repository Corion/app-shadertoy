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
#include <src/glew-context.c>

#include "const-c.inc"

/*
  Maybe one day we'll allow Perl callbacks for GLDEBUGPROCARB
*/

MODULE = OpenGL::Glew		PACKAGE = OpenGL::Glew		

GLboolean
glewCreateContext()
CODE:
  struct createParams params =
  {
#if defined(GLEW_OSMESA)
#elif defined(GLEW_EGL)
#elif defined(_WIN32)
    -1,  /* pixelformat */
#elif !defined(__HAIKU__) && !defined(__APPLE__) || defined(GLEW_APPLE_GLX)
    "",  /* display */
    -1,  /* visual */
#endif
    0,   /* major */
    0,   /* minor */
    0,   /* profile mask */
    0    /* flags */
  };
    glewCreateContext (&params);

SV *
glewDestroyContext()
CODE:
    glewDestroyContext();

UV
glewInit()
CODE:
    glewExperimental = GL_TRUE; /* We want everything that is available on this machine */
    RETVAL = glewInit();
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

SV *
_glShaderSource( shader, count, string, length);
    GLuint shader;
     GLsizei count;
     char * string;
     char * length;
CODE:
    if(! __glewShaderSource) {
        croak("glShaderSource not available on this machine");
    };
/*    
    printf("Length %d\n", length);
    void ** str = string;
    str = *str;
    printf("%s\n", str);
*/
    // We come from Perl, so we have null-terminated strings
    glShaderSource( shader, count, string, NULL);

SV *
_glCompileShader( shader);
    GLuint shader
CODE:
    if(! __glewCompileShader) {
        croak("glCompileShader not available on this machine");
    };
    glCompileShader( shader);

SV *
_glGetShaderiv( shader,  pname, param);
    GLuint shader;
     GLenum pname;
     char* param;
CODE:
    if(! __glewGetShaderiv) {
        croak("glGetShaderiv not available on this machine");
    };
    printf("Pre Shader status: %d\n", (GLint) *param);
    printf("Pre Shader name: %d\n", pname);
    glGetShaderiv( shader,  pname, param);
    printf("Shader status: %d\n", (GLint) *param);

GLint
_glGetAttribLocation( program,   name);
     GLuint program;
      GLchar* name;
CODE:
    if(! __glewGetAttribLocation) {
        croak("glGetAttribLocation not available on this machine");
    };
    RETVAL = glGetAttribLocation( program,   name);
OUTPUT:
    RETVAL

SV *
_glGenBuffers( n,   buffers);
     GLsizei n;
     char* buffers;
CODE:
    if(! __glewGenBuffers) {
        croak("glGenBuffers not available on this machine");
    };
    glGenBuffers( n,   buffers);

SV *
_glBindBuffer( target,  buffer);
     GLenum target;
     GLuint buffer;
CODE:
    if(! __glewBindBuffer) {
        croak("glBindBuffer not available on this machine");
    };
    glBindBuffer( target,  buffer);

SV *
_glNamedBufferData( buffer,  size,   data,  usage);
     GLuint buffer;
     GLint size;
      void *data;
     GLenum usage;
CODE:
    if(! __glewNamedBufferData) {
        croak("glNamedBufferData not available on this machine");
    };
    glNamedBufferData( buffer,  size,   data,  usage);

GLuint
_glCreateProgram();
CODE:
    if(! __glewCreateProgram) {
        croak("glCreateProgram not available on this machine");
    };
    RETVAL = glCreateProgram();
OUTPUT:
    RETVAL

SV *
_glAttachShader( program,  shader);
     GLuint program;
     GLuint shader;
CODE:
    if(! __glewAttachShader) {
        croak("glAttachShader not available on this machine");
    };
    glAttachShader( program,  shader);

SV *
_glLinkProgram( program);
     GLuint program;
CODE:
    if(! __glewLinkProgram) {
        croak("glLinkProgram not available on this machine");
    };
    glLinkProgram( program);

SV *
_glBufferData( target,  size,   data,  usage);
     GLenum target;
     GLint size;
      void* data;
     GLenum usage;
CODE:
    if(! __glewBufferData) {
        croak("glBufferData not available on this machine");
    };
    glBufferData( target,  size,   data,  usage);

SV *
_glGetShaderInfoLog( shader,  bufSize,   length,   infoLog);
     GLuint shader;
     GLsizei bufSize;
     char* length;
     char* infoLog;
CODE:
    if(! __glewGetShaderInfoLog) {
        croak("glGetShaderInfoLog not available on this machine");
    };
    printf("length addr: %x\n", length);
    printf("length value: %d\n", (int) *length);
    glGetShaderInfoLog( shader,  bufSize,   length,   infoLog);

GLint
_glCreateShader(what)
    GLint what;
CODE:
    if(! __glewCreateShader) {
        croak("glCreateShader not available on this machine");
    };
    RETVAL = glCreateShader(what);
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
    RETVAL = glewIsSupported(name);
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
INCLUDE: auto-xs.inc
