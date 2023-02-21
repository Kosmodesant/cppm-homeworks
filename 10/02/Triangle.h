#pragma once
#include "Figure.h"


class Triangle : public Figure
{
public:
	Triangle();

	Triangle(int a, int b, int c, int A, int B, int C);

protected:

	Triangle(int sides_count, string name);

	Triangle(int a, int b, int c, int A, int B, int C, int sides_count, string name);

	string get_sides()override;
	string get_corn() override;

	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
};