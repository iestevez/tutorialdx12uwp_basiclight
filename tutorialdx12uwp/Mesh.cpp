#include "pch.h"
#include "Mesh.h"


Mesh::Mesh()
{
	vertices = {
		{XMFLOAT3(-1.0f,-1.0f,-1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(-1.0f,+1.0f,-1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(+1.0f,+1.0f,-1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(+1.0f,-1.0f,-1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(-1.0f,-1.0f,+1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(-1.0f,+1.0f,+1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(+1.0f,+1.0f,+1.0f),XMFLOAT4(Colors::Red)},
		{XMFLOAT3(+1.0f,-1.0f,+1.0f),XMFLOAT4(Colors::Red)}
	};

	indices = {
		0,1,2,
		0,2,3,
		4,6,5,
		5,7,6,
		4,5,1,
		4,1,0,
		3,2,6,
		3,6,7,
		1,5,6,
		1,6,2,
		4,0,3,
		4,3,7


	};

	unsigned int sv = sizeof(Vertex);
	unsigned int nvertices = vertices.size();
	vsize = nvertices * sv;
	unsigned int sind = sizeof(unsigned int);
	unsigned int nindices = indices.size();
	isize = nindices * sind;
}


Mesh::~Mesh()
{
}

unsigned int Mesh::GetVSize() const {
	return vsize;
}

unsigned int Mesh::GetISize() const {
	return isize;
}