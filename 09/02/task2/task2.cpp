#include <iostream>
#include "class_Fraction.h"

using namespace std;


static ostream& operator << (ostream& out, const Fraction& fraction)
{
	return out << fraction.get_numerator() << "/" << fraction.get_denominator();
};


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	int x = 0;
	int y = 0;

	Fraction f(0, 0);

	cout << "Введите числитель дроби 1: " << "\n";
	cin >> x;
	cout << "Введите знаменатель дроби 1: " << "\n";
	cin >> y;
	Fraction a1(x, y);

	cout << "Введите числитель дроби 2: " << "\n";
	cin >> x;
	cout << "Введите знаменатель дроби 2: " << "\n";
	cin >> y;
	Fraction a2(x, y);


	cout << a1.print_info() << " + " << a2.print_info() << " = " << a1 + a2 << "\n";

	cout << a1.print_info() << " - " << a2.print_info() << " = " << a1 - a2 << "\n";

	cout << a1.print_info() << " * " << a2.print_info() << " = " << a1 * a2 << "\n";

	cout << a1.print_info() << " / " << a2.print_info() << " = " << a1 / a2 << "\n";

	cout << "++" << a1.print_info() << " * " << a2.print_info(); 
	
	cout << " = " << ++a1 * a2 << "\n";

	cout << "Значение дроби 1 " << a1.print_info() << "\n";

	cout << a1.print_info() << "--" << " * " << a2.print_info();

	cout << " = " << a1-- * a2 << "\n";

	cout << "Значение дроби 1 " << a1.print_info() << "\n";

	return 0;
}