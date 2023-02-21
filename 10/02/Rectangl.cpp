#include "Rectangl.h"

Rectangl::Rectangl(int a, int b) :Parallelogram(a, b, 90, 90, 4, "Прямоугольник: ") {};
Rectangl::Rectangl(int a, int b, int sides_count, string name) : Parallelogram(a, b, 90, 90, sides_count, name){};