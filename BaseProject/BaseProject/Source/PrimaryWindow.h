#pragma once
#include "stdafx.h"

HWND *MyWindow;

namespace WindowSettings
{
	bool Fullscreen = false;
}

struct WindowCorners // 0 - MaxScreen Width xy
{
	UINT TL;
	UINT TU;
	UINT BL;
	UINT BU;
};


//#define EightHundred_SixHundred WindowCorners(CW_USEDEFAULT, 0, )