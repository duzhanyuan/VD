/**
 * @author Micha� Gawin
 */


#ifndef _VIRTUAL_DESKTOP_H_VD_
#define _VIRTUAL_DESKTOP_H_VD_


#define _WIN32_IE		0x0501 // need for NOTIFYICONDATA
#define _WIN32_WINNT	0x0501 // need for SetLayeredWindowAttributes

#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <vector>

#include "resource.h"
#include "Sys.h"


#define DESKTOPS			5

/**
 * IDs for hot keys
 */
#define PREV_WIN		1
#define NEXT_WIN		2

/**
 * IDs for private errors
 */
#define ERR_DESKTOP_NUM	1


#endif //_VIRTUAL_DESKTOP_H_VD_
