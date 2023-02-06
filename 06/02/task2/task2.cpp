
#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	int enter_sign = 1;

	string enter_console;
	string yes = "да";
	string no = "нет";
	string stop = "х";
	string plus = "+";
	string minus = "-";
	string equal = "=";
	Counter counter;
	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> enter_console;
	if (enter_console == yes) {
		cout << "Введите начальное значение счётчика: ";
		cin >> enter_sign;
		counter.set_counter(enter_sign);
	}
	else
	{
		counter.set_counter(enter_sign);
		/*cout << "До свидания!";
		return 0;*/
	}

	while (true)
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> enter_console;
		if (enter_console == stop) { cout << "До свидания!"; break; }
		else if (enter_console == plus) { counter.plus_counter(); }
		else if (enter_console == minus) { counter.minus_counter(); }
		else if (enter_console == equal) { counter.print_counter(); }
		else { cout << "Неизвестная команда!" << endl; continue; }
	}
}