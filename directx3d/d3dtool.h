#ifndef D3DTOOL_H
#define D3DTOOL_H

/**
  d3dtool.h copyright(c) UncStatus++
  Praise The Lord!
*/

#include <d3d.h>

#ifndef _WIN32
#define _WIN32
#endif

#ifndef WIN32
#define WIN32
#endif

#define DIRECT_3D_BUFFER (static)(char)(__stdcall)
#define DIRECT_3D_RELEASE (void)(__stdcall)
#define DIRECT_3D_RENDER (void)(__stdcall)
#define DIRECT_3D_HOOK_WINDOW (void)(HWND)(HDC)(__stdcall)



#endif
