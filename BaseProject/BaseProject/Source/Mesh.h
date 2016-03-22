#pragma once

struct ID3D11Buffer;
struct D3D11_BUFFER_DESC;

class Mesh
{
	void * Index;
	void * VertData;
	ID3D11Buffer * VertexBuffer;
	ID3D11Buffer * IndexBuffer;
	
public:
	Mesh();
	~Mesh();
	int VertID = 0;

	inline void Setmesh(void * const _Mesh) { VertData = _Mesh; }
	inline void Setindex(void * const _Index) { Index = _Index; }

	bool CreateBuffers(D3D11_BUFFER_DESC& _INDEX, D3D11_BUFFER_DESC& _Other);

	//TEMPARARY, DEBUG
	int Indexcount = 108;



	inline void* GetMeshData(void) { return VertData;}
	inline void* GetIndexData(void) { return Index; }

};

