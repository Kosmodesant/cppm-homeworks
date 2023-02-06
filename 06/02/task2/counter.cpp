#include "Header.h"
using namespace std;

Counter::Counter() { this->counter_=0; }
void Counter::set_counter(int x) { counter_ = x; }
void Counter::plus_counter() { counter_++; }
void Counter::minus_counter() { counter_--; }
void Counter::print_counter() { cout << counter_<< endl; }
