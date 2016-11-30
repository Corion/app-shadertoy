#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <dwmapi.h>

MODULE = Win32::TransparentWindow		PACKAGE = Win32::TransparentWindow

HRESULT
DwmEnableBlurBehindWindow(hWnd, pBlurBehind)
    HWND             hWnd;
    DWM_BLURBEHIND*  pBlurBehind;
CODE:
    DWM_BLURBEHIND   test;
    HBRUSH bg = (HBRUSH)CreateSolidBrush(0x00000000);
    SetClassLongPtr(hWnd, GCLP_HBRBACKGROUND, (LONG)bg);
    HRGN hRgn = CreateRectRgn(0, 0, -1, -1);
    memset( &test, sizeof(test),0);
    test.dwFlags = DWM_BB_ENABLE | DWM_BB_BLURREGION;
    test.fEnable = true;
    test.hRgnBlur = hRgn;
    //printf("%d\n",sizeof(test));
    //printf("%d\n",sizeof(test.fEnable)); // 4!
    printf("Making hWnd %08x transparent\n", hWnd);
    RETVAL = DwmEnableBlurBehindWindow(hWnd, &test);
OUTPUT:
    RETVAL