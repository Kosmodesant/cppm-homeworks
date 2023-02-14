
#include "Parallelogram.h"
#include "exception.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, D, A, B, C, D, 4, "�������������") {};

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name) :Quadrangle(a, b, c, d, A, B, C, D, sides_count, name) {


	if ((a != c && b != d) && (A != C && B != D)) {

		string ex_error = "�������������� (������� " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ", " + to_string(d) + "; ���� " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ", " + to_string(D) + ")" +
			" �� ������." + "\n" + "������ �������� ������. �������: ������� a,c � b,d ������� �� �����, ���� A,C � B,D ������� �� �����" + "\n";
		throw Exception(ex_error);
	}

	else {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "�������";
		this->sides_count = sides_count;
	}
};
