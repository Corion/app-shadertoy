#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#define GLEW_STATIC
#include "windows.h"
#include <include/GL/glew.h>

#include "const-c.inc"

MODULE = OpenGL::Glew		PACKAGE = OpenGL::Glew		

UV
glewInit()
CODE:
    RETVAL = glewInit();
OUTPUT:
    RETVAL

SV*
glewGetString(what)
    GLenum what;
CODE:
    RETVAL = newSVpv(glewGetString(what),0);
OUTPUT:
    RETVAL

GLint
glCreateShader(what)
    GLint what;
CODE:
    RETVAL = glCreateShader(what);
OUTPUT:
    RETVAL

GLboolean
glAreProgramsResidentNV_p(...);
PPCODE:
     /* Use a mortal SV to get automagic memory management */
     SV* buf_ids = newSVpv("",items * sizeof(GLuint));
     SV* buf_res = newSVpv("",items * sizeof(GLboolean));
     GLuint* ids = (GLuint*) SvPV_nolen(buf_ids);
     GLboolean* residences = (GLboolean*) SvPV_nolen(buf_res);
     
     int i;
     
     for( i = 0; i < items; i++ ) {
	       ids[i] = SvIV(ST(i));
	 };
     glAreProgramsResidentNV(items, ids, residences);
     EXTEND(SP, items);
     for( i = 0; i < items; i++ ) {
        PUSHs(sv_2mortal(newSViv(residences[i])));
	 };

INCLUDE: const-xs.inc
