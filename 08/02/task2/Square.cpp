#include "Square.h"
#include "exception.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) :Rectangl(a, b, c, d, A, B, C, D, 4, "Квадрат") {

	if ((a != b != c != d) && (A != 90 && B != 90 && C != 90 && D != 90)) {

		string ex_error = "Квдарат (стороны " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ", " + to_string(d) + "; углы " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ", " + to_string(D) + ")" +
			" не создан." + "\n" + "Ошибка создания фигуры. Причина: все стороны не равны, все углы не равны 90" + "\n";
		throw Exception(ex_error);
	}

	else {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "Квадрат";
		this->sides_count = sides_count;
	}
};