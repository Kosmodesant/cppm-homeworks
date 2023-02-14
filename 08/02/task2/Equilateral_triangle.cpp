#include "Equilateral_triangle.h"
#include "exception.h"


Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 3, "Равносторонний треугольник") {

	if ((a != b and b != c) and (A != 60 and B != 60 and C != 60))

	{
		string ex_error = "Равносторонний треугольник (стороны " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + "; углы " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ")" +
			" не создан." + "\n" + "Ошибка создания фигуры. Причина: стороны a, b и c не равны, углы A, B и C не равны 60" + "\n";
		throw Exception(ex_error);

	}

	else
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = "Равносторонний треугольник";
		this->sides_count = 3;
	}
};
