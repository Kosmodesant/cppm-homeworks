#include "Figure.h"
#include <string>

using namespace std;

Figure::Figure() :Figure(0, "������") {};

void Figure::print_info()
{
	cout << name << " (" << "������� " << get_sides() << " ���� " << get_corn() << ")" << " ������ " << "\n";
};

Figure::Figure(int sides_count, string name)
{
	this->sides_count = sides_count;
	this->name = name;
};

string Figure::get_sides()
{
	return " ";
};

string Figure::get_corn()
{
	return " ";
};

int Figure::get_sides_count()
{
	return sides_count;
};
