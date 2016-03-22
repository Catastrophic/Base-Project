#pragma once

class Mesh;

class TestObject
{
	typedef int VertexID;

	Mesh* m_Mesh = nullptr;
	


public:
	TestObject();
	~TestObject();

	bool BuildMesh(void* MeshData,void* IndexData, VertexID);

};

