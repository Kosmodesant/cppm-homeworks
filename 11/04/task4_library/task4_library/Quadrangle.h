#pragma once
#include "Figure.h"


	class Quadrangle : public Figure
	{
	public:
		GEOMETRYLIBRARY_API Quadrangle();

		GEOMETRYLIBRARY_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

	protected:
		Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name);

		string GEOMETRYLIBRARY_API get_sides() override;

		string GEOMETRYLIBRARY_API get_corn() override;

		int a = 0, b = 0, c = 0, d = 0;
		int A = 0, B = 0, C = 0, D = 0;
	};
