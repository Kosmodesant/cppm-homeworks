
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	int b = 0;
	int enter = 0;

	cout << "Выберите операцию:\n 1 - сложение\n 2 - вычитание\n 3 - умножение\n 4 - деление\n 5 - возведение в степень\n";
	cin >> enter;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;

	switch (enter)
	{
	case 1:cout << a << " + " << b << " = " << sum(a, b) << "\n"; break;
	case 2:cout << a << " - " << b << " = " << subtraction(a, b) << "\n"; break;
	case 3:cout << a << " * " << b << " = " << multiplication(a, b) << "\n"; break;
	case 4:cout << a << " / " << b << " = " << division(a, b) << "\n"; break;
	case 5:cout << a << " в степени " << b << " = " << exponentiation(a, b) << "\n"; break;
	}
}

