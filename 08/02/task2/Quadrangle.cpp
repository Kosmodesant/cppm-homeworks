#include "Quadrangle.h"
#include "exception.h"

Quadrangle::Quadrangle() :Quadrangle(4, "Четырехугольник") {};

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {

	if (A + B + C + D != 360) {
		string ex_error = "Четырехугольник (стороны " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ", " + to_string(d) + "; углы " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ", " + to_string(D) + ")" +
			" не создан." + "\n" + "Ошибка создания фигуры. Причина: сумма углов не равна 360" + "\n";
		throw Exception(ex_error);
	}

	else {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "Четырехугольник";
		this->sides_count = sides_count;
	}

};

Quadrangle::Quadrangle(int sides_count, string name)
{
	this->name = name;
	this->sides_count = sides_count;
};


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name) {

	this->a = a; this->b = b; this->c = c; this->d = d;
	this->A = A; this->B = B; this->C = C; this->D = D;
	this->name = name;
	this->sides_count = sides_count;
};


string Quadrangle::get_sides() {
	string buf = { to_string(a) + "," + to_string(b) + "," + to_string(c) + "," + to_string(d) + ";" };
	return buf;
};

string Quadrangle::get_corn()
{
	string buf = { to_string(A) + "," + to_string(B) + "," + to_string(C) + "," + to_string(D) };
	return buf;
};