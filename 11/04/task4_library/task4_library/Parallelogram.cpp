
#include "Parallelogram.h"


Parallelogram::Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B, 4, "Параллелограм: "){};

Parallelogram::Parallelogram(int a, int b, int A, int B, int sides_count, string name) :Quadrangle(a, b, a, b, A, B, A, B, sides_count, name){};
