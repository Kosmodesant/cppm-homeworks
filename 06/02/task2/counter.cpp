#include "Header.h"
using namespace std;

�ounter::�ounter() { this->counter_=0; }
void �ounter::set_counter(int x) { counter_ = x; }
void �ounter::plus_counter() { counter_++; }
void �ounter::minus_counter() { counter_--; }
void �ounter::print_counter() { cout << counter_<< endl; }
