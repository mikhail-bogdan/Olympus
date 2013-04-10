#pragma once

#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "Camera.h"
#include <vector>
using namespace std;

class Renderable
{
public:
	virtual void Render(ID3D11Buffer *sceneBuff, Camera *mCam, int renderType) {}

	
	vector<ID3D11Buffer*> perCBuffers;
};

#endif