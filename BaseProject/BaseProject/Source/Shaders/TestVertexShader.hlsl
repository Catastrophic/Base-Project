#pragma pack_matrix(row_major)

struct IN_Vert
{
	float4 pos : POSITION;
	float2 UV : TEXCOORD;
	float4 Norm : NORMAL;
	float4 Color : COLOR;
};

struct OUT_Vert
{
	float4 pos : SV_POSITION;
	float2 UV : TEXCOORD;
	float4 Norm : NORMAL;
	float4 Color : COLOR;
	
};


//Shading Function Main
OUT_Vert main(IN_Vert Current_Vertex)
{


	OUT_Vert OV; /*= (OUT_Vert)0;*/

	OV.pos = Current_Vertex.pos;
	OV.UV = Current_Vertex.UV;
	OV.Norm = Current_Vertex.Norm;
	OV.Color = Current_Vertex.Color;

	return OV;


}