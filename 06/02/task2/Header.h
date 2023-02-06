#pragma once
#include <iostream>

class Ñounter
{
public:
	Ñounter();
	void set_counter(int x);
	void plus_counter();
	void minus_counter();
	void print_counter();
private:
	int counter_;
};
