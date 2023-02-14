#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
protected:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name);
};