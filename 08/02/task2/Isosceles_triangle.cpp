#include "Isosceles_triangle.h"
#include "exception.h"

Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 3, "Равнобедренный треугольник") {

	if (a != c || A != C)

	{
		string ex_error = "Равнобедренный треугольник (стороны " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + "; углы " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ")" +
			" не создан." + "\n" + "Ошибка создания фигуры. Причина: стороны a и c не равны, углы A и C не равны" + "\n";
		throw Exception(ex_error);

	}
	else
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = "Равнобедренный треугольник";
		this->sides_count = 3;
	}
};