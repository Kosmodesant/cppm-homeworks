#pragma once
#include "Parallelogram.h"

class Rectangl : public Parallelogram
{
public:
	Rectangl(int a, int b);
protected:
	Rectangl(int a, int b, int sides_count, string name);
};