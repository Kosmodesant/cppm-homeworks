#include "Rectangular_triangle.h"
#include "exception.h"

Rectangular_triangle::Rectangular_triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 3, "Прямоугольный треугольник") {
	if (C != 90)
	{
		string ex_error = "Треугольник (стороны " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + "; углы " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ")" +
			" не создан." + "\n" + "Ошибка создания фигуры. Причина: углол С не равен 90" + "\n";
		throw Exception(ex_error);

	}
	else
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = "Прямоугольный треугольник";
		this->sides_count = 3;
	}

};
