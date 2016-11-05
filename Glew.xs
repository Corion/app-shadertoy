#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#define GLEW_STATIC
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

GLenum
glGetError();
CODE:
    RETVAL = glGetError();
OUTPUT:
    RETVAL

SV *
glShaderSource( shader, count, string, length);
    GLuint shader;
     GLsizei count;
     char * string;
     char * length;
CODE:
    if(! __glewShaderSource) {
        croak("glShaderSource not available on this machine");
    };
    // We come from Perl, so we have null-terminated strings
    glShaderSource( shader, count, string, NULL);

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
