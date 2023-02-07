#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B);
protected:
	Parallelogram(int a, int b, int A, int B, int sides_count, string name);
};