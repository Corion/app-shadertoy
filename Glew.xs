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

INCLUDE: const-xs.inc
