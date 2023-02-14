#include "Equilateral_triangle.h"
#include "exception.h"


Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 3, "�������������� �����������") {

	if ((a != b and b != c) and (A != 60 and B != 60 and C != 60))

	{
		string ex_error = "�������������� ����������� (������� " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + "; ���� " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ")" +
			" �� ������." + "\n" + "������ �������� ������. �������: ������� a, b � c �� �����, ���� A, B � C �� ����� 60" + "\n";
		throw Exception(ex_error);

	}

	else
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = "�������������� �����������";
		this->sides_count = 3;
	}
};
