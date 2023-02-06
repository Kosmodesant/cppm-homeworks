#pragma once
#include <iostream>

class Counter
{
public:
	Counter();
	void set_counter(int x);
	void plus_counter();
	void minus_counter();
	void print_counter();
private:
	int counter_;
};
