#pragma once
#include "Figure.h"


class Quadrangle : public Figure
{
public:
	Quadrangle();

	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

protected:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name);
	
	string get_sides() override;

	string get_corn() override;

	int a = 0, b = 0, c = 0, d = 0;
	int A = 0, B = 0, C = 0, D = 0;
};