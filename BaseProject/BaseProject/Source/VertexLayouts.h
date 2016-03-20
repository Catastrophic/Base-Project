#pragma once
#include "DirectXCalc.h"
using namespace DirectX;

namespace VertexLayout
{
	struct Test
	{
		float Coordinates[4];
		float UV[4];
		float Normals[4];
		float Color[4];
	};
	struct Standard
	{
		XMFLOAT4 pos;
		XMFLOAT4 Norm;
		XMFLOAT4 UV;

	};

}
