
#include "Parallelogram.h"
#include "exception.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, D, A, B, C, D, 4, "Параллелограм") {};

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name) :Quadrangle(a, b, c, d, A, B, C, D, sides_count, name) {


	if ((a != c && b != d) && (A != C && B != D)) {

		string ex_error = "Параллелограмм (стороны " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ", " + to_string(d) + "; углы " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ", " + to_string(D) + ")" +
			" не создан." + "\n" + "Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны, углы A,C и B,D попарно не равны" + "\n";
		throw Exception(ex_error);
	}

	else {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "Квадрат";
		this->sides_count = sides_count;
	}
};
