#include <iostream>
#include <string>
using namespace std;

class Figure {
public:
	Figure() { sides_count = 0; this->name = "Фигура: "; };
	int get_sides_count() { return sides_count; };
	string get_name() { return name; };
protected:
	int sides_count;
	string name;
};


class Triangle : public Figure {
public:
	Triangle() { sides_count = 3; this->name = "Треугольник: "; };
};


class Quadrangle : public Figure {
public:
	Quadrangle() { sides_count = 4; this->name = "Квадрат: "; };
};


int main() {

	setlocale(LC_ALL, "Russian");

	Figure unknown = {};
	Triangle triangle = {};
	Quadrangle quadrangle = {};

	cout << "Количество сторон:\n";
	cout << unknown.get_name() << unknown.get_sides_count() << "\n";
	cout << triangle.get_name() << triangle.get_sides_count() << "\n";
	cout << quadrangle.get_name() << quadrangle.get_sides_count() << "\n";
}
