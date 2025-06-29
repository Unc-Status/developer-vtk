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

namespace DX3D{

  namespace DX3DBUFFER{
      static char cBuff[1024];
  }

  void Render(ID3DResource * pResource);
  void Release(ID3DResource * pResource);
  void HookWindow(HWND Window, HDC &pDeviceContext);

}


#endif
