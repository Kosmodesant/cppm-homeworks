#include "Rhomb.h"
#include "exception.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D, 4, "����") {

	if ((a != b != c != d) && (A != C && B != D)) {

		string ex_error = "���� (������� " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ", " + to_string(d) + "; ���� " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ", " + to_string(D) + ")" +
			" �� ������." + "\n" + "������ �������� ������. �������: ��� ������� �� �����, ���� A,C � B,D ������� �� �����" + "\n";
			throw Exception(ex_error);
	}

	else {
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "����";
		this->sides_count = sides_count;
	}
};
