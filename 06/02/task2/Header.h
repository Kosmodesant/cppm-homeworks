#pragma once
#include <iostream>

class �ounter
{
public:
	�ounter();
	void set_counter(int x);
	void plus_counter();
	void minus_counter();
	void print_counter();
private:
	int counter_;
};
