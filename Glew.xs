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
glShaderSource( shader, count, string, length);
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
glCompileShader( shader);
    GLuint shader
CODE:
    if(! __glewCompileShader) {
        croak("glCompileShader not available on this machine");
    };
    glCompileShader( shader);

SV *
glGetShaderiv( shader,  pname, param);
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

SV *
glGetShaderInfoLog( shader,  bufSize,   length,   infoLog);
    GLuint shader;
     GLsizei bufSize;
     char* length;
     char* infoLog
CODE:
    if(! __glewGetShaderInfoLog) {
        croak("glGetShaderInfoLog not available on this machine");
    };
    glGetShaderInfoLog( shader,  bufSize,   length,   infoLog);

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
