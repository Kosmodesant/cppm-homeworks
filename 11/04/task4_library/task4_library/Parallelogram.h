#pragma once
#include "Quadrangle.h"


	class Parallelogram : public Quadrangle
	{
	public:
		GEOMETRYLIBRARY_API Parallelogram(int a, int b, int A, int B);
	protected:
		GEOMETRYLIBRARY_API Parallelogram(int a, int b, int A, int B, int sides_count, string name);
	};
