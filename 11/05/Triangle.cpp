#include "Triangle.h"

Triangle::Triangle() :Triangle(3, "Треугольник:") {};


Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 3, "Треугольник:") {};


Triangle::Triangle(int sides_count, string name)
{
	this->name = name;
	this->sides_count = sides_count;
};


Triangle::Triangle(int a, int b, int c, int A, int B, int C, int sides_count, string name)
{
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = name;
		this->sides_count = sides_count;
	}
};

string Triangle::get_sides()
{
	string buf = { "Стороны: a=" + to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) + "\n" };
	return buf;
};

string Triangle::get_corn()
{
	string buf = { "Углы: A=" + to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) + "\n" };
	return buf;
};