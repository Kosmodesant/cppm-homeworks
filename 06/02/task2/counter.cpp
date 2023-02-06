#include "Header.h"
using namespace std;

Ñounter::Ñounter() { this->counter_=0; }
void Ñounter::set_counter(int x) { counter_ = x; }
void Ñounter::plus_counter() { counter_++; }
void Ñounter::minus_counter() { counter_--; }
void Ñounter::print_counter() { cout << counter_<< endl; }
