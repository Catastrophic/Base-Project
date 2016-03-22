#pragma once
#include "DirectXCalc.h"
#include "VertexLayouts.h"
#include "UtilityLoader.h"
class Renderer
{


	UtilityLoader ShaderLoader;

	//static cbPerObject thePerObjectData;

	void CreateSwapChain(DXGI_SWAP_CHAIN_DESC&);
	bool CreateDepthBuffer();
	bool CreateDepthStencil();
	bool CreateSampleState();
	bool CreateBasicShaders();


	void CreateTestStar(int * Index, VertexLayout::Test *Star);

	ID3D11PixelShader* PixShaderBasic;
	ID3D11VertexShader* VertShaderBasic;

	void * PixShaderData;
	void * VertShaderData;

public:
	static ID3D11Device * theDevicePtr;

	static ID3D11DeviceContext * theContextPtr;

	static IDXGISwapChain * theSwapChainPtr;

	static ID3D11RenderTargetView * theRenderTargetViewPtr;

	static ID3D11Texture2D *theBackBufferPtr;


	static ID3D11Texture2D * theDepthStencilBufferPtr;

	static ID3D11DepthStencilView  * theDepthStencilViewPtr;

	static D3D11_VIEWPORT* theScreenViewport;

	ID3D11SamplerState* TheSamplerState;


	static ID3D11Buffer *thePerObjectCBuffer;

	Renderer();
	~Renderer();
	void Initialize();
	int ShutDown();
	void Update(float delta);

};

