#pragma once

static HWND *MyWindow = 0;

namespace WindowSettings
{
	static bool Fullscreen = false;
	static UINT screenHeight = 0;
	static UINT screenWidth = 0;

}

struct WindowCorners // 0 - MaxScreen Width xy
{
	UINT TL;
	UINT TU;
	UINT BL;
	UINT BU;
};


//#define EightHundred_SixHundred WindowCorners(CW_USEDEFAULT, 0, )