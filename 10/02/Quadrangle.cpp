#include "Quadrangle.h"


Quadrangle::Quadrangle() {};

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, d, A, B, C, D, 4, "Четырехугольник:") {};

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name) {
	this->a = a; this->b = b; this->c = c; this->d = d;
	this->A = A; this->B = B; this->C = C; this->D = D;
	this->name = name;
	this->sides_count = sides_count;
};

string Quadrangle::get_sides() {
	string buf = { "Стороны: a=" + to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) + " d=" + to_string(d) + "\n" };
	return buf;
};

string Quadrangle::get_corn()
{
	string buf = { "Углы: A=" + to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) + " D=" + to_string(D) + "\n" };
	return buf;
};