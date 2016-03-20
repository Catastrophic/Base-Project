#pragma once
#include "DirectXCalc.h"
#include "VertexLayouts.h"
class Renderer
{


	static ID3D11Device * theDevicePtr;

	static ID3D11DeviceContext * theContextPtr;

	static IDXGISwapChain * theSwapChainPtr;

	static ID3D11RenderTargetView * theRenderTargetViewPtr;

	static ID3D11Texture2D *theBackBufferPtr;


	static ID3D11Texture2D * theDepthStencilBufferPtr;

	static ID3D11DepthStencilView  * theDepthStencilViewPtr;

	static D3D11_VIEWPORT theScreenViewport;

	//static cbPerObject thePerObjectData;
	static ID3D11Buffer *thePerObjectCBuffer;
	
	void CreateSwapChain(DXGI_SWAP_CHAIN_DESC&);
	void CreateTestStar(int * Index, VertexLayout::Test *Star);

	

public:
	Renderer();
	~Renderer();
	void Initialize();
	int ShutDown();

};

