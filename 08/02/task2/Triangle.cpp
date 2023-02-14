#include "Triangle.h"
#include "exception.h"

Triangle::Triangle() :Triangle(3, "�����������") {};


Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	if (A + B + C != 180)
	{
		string ex_error = "����������� (������� " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + "; ���� " +
			to_string(A) + ", " + to_string(B) + ", " + to_string(C) + ")" +
			" �� ������." + "\n" + "������ �������� ������. �������: ����� ����� �� ����� 180" + "\n";
		throw Exception(ex_error);

	}
	else
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = "�����������";
		this->sides_count = 3;
	}
}

Triangle::Triangle(int sides_count, string name)
{
	this->name = name;
	this->sides_count = sides_count;
};


Triangle::Triangle(int a, int b, int c, int A, int B, int C, int sides_count, string name)
{
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = name;
		this->sides_count = sides_count;
	}
};

string Triangle::get_sides()
{
	string buf = { to_string(a) + "," + to_string(b) + "," + to_string(c) + ";" };
	return buf;
};

string Triangle::get_corn()
{
	string buf = { to_string(A) + "," + to_string(B) + "," + to_string(C) };
	return buf;
};