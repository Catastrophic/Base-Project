
struct InPixel
{
	float4 pos : POSITION;
	float2 UV : TEXCOORD;
	float4 Norm : NORMALS;
	float4 Color : COLOR;
};

float4 main(InPixel Pixel) : SV_TARGET
{

	return Pixel.Color;
}