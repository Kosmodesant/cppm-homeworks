#pragma once
#include "Parallelogram.h"

class Rectangl : public Parallelogram
{
public:
	Rectangl(int a, int b, int c, int d, int A, int B, int C, int D);
protected:
	Rectangl(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name);
};