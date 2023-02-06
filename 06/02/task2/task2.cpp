
#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	int enter_sign = 1;

	string enter_console;
	char enter_console2;
	string yes = "да";
	string no = "нет";
	char stop = 'х';
	char plus = '+';
	char minus = '-';
	char equal = '=';

	Counter counter;

	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> enter_console;

	if (enter_console == yes) {
		cout << "Введите начальное значение счётчика: ";
		cin >> enter_sign;
		counter.set_counter(enter_sign);
	}
	else if (enter_console == no) {
		counter.set_counter(enter_sign);
	}
	else
	{
		cout << "Неизвестная команда!";
		return 0;
	}

	while (true)
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> enter_console2;

		switch (enter_console2)
		{
		case '+': // +1
			counter.plus_counter();
			break;
		case '-': // -1
			counter.minus_counter();
			break;
		case '=': // =
			counter.print_counter();
			system("pause");
			break;
		case 'х': // stop
			cout << "До свидания!\n" << endl;
			break;
		default:  // неизвестная команда
			cout << "\nНеизвестная команда!\n" << endl;
			system("pause");
			continue;
		}
	}
}

