#pragma once
#include "Figure.h"


	class Triangle : public Figure
	{
	public:
		GEOMETRYLIBRARY_API Triangle();

		GEOMETRYLIBRARY_API Triangle(int a, int b, int c, int A, int B, int C);

	protected:

		GEOMETRYLIBRARY_API  Triangle(int sides_count, string name);

		GEOMETRYLIBRARY_API  Triangle(int a, int b, int c, int A, int B, int C, int sides_count, string name);

		string GEOMETRYLIBRARY_API get_sides()override;
		string GEOMETRYLIBRARY_API get_corn() override;

		int a = 10, b = 20, c = 30;
		int A = 50, B = 60, C = 70;
	};
