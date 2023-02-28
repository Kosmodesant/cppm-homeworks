#include "Figure.h"
#include <string>
using namespace std;


Figure::Figure() :Figure(0, "Фигура:") {};

void Figure::print_info()
{
	cout << name << "\n" << get_sides() << get_corn() << "" << " " << " " << "\n"; 
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

string /*Kosmodesant::*/Figure::get_corn()
{
	return " ";
};

int /*Kosmodesant::*/Figure::get_sides_count()
{
	return sides_count;
};

