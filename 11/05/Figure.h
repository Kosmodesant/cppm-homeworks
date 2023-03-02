#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
	Figure();
	void print_info();

protected:
	Figure(int sides_count, string name);
	virtual string get_sides();
	virtual string get_corn();
	int get_sides_count();
	int sides_count;
	string name;
};


