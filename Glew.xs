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
glAreProgramsResidentNV_p(GLuint* ids);
PPCODE:
     /* Use a mortal SV to get automagic memory management */
     /*
     SV* buf_ids = sv_2mortal(newSVpv("",items * sizeof(GLuint)));
     SV* buf_res = sv_2mortal(newSVpv("",items * sizeof(GLboolean)));
     GLuint* ids = (GLuint*) SvPV_nolen(buf_ids);
     GLboolean* residences = (GLboolean*) SvPV_nolen(buf_res);
     
     int i;
     
     for( i = $argoff; i < items; i++ ) {
	       ids[i] = SvIV(ST(i));
	 };
	 */
     SV* buf_res = sv_2mortal(newSVpv("",items * sizeof(GLboolean)));
     GLboolean* residences = (GLboolean*) SvPV_nolen(buf_res);
     glAreProgramsResidentNV(items, ids, residences);
     EXTEND(SP, items);
     int i2;
     for( i2 = 0; i2 < items; i2++ ) {
        PUSHs(sv_2mortal(newSViv(residences[i2])));
	 };

INCLUDE: const-xs.inc
