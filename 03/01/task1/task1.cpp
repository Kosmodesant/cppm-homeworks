﻿
#include <iostream>
using namespace std;


class Calculator
{
public:
	double num1;
	double num2;

	//метод должен возвращать результат сложения num1 и num2
	double add() {
		cout << "num1 + num2 = " << num1 + num2 << endl;
		return 0;
	};

	//метод должен возвращать результат перемножения num1 и num2
	double multiply() {
		cout << "num1 * num2 = " << num1 * num2 << endl;
		return 0;
	};

	//метод должен возвращать результат вычитания num2 из num1
	double subtract_1_2() {
		cout << "num1 - num2 = " << num1 - num2 << endl;
		return 0;
	};

	//метод должен возвращать результат вычитания num1 из num2
	double subtract_2_1() {
		cout << "num2 - num1 = " << num2 - num1 << endl;
		return 0;
	};
	//метод должен возвращать результат деления num1 на num2
	double divide_1_2() {
		cout << "num1 / num2 = " << num1 / num2 << endl;
		return 0;
	};
	//метод должен возвращать результат деления num2 на num1
	double divide_2_1() {
		cout << "num2 / num1 = " << num2 / num1 << endl;
		return 0;
	};
	//метод должен установить значение поля num1 равное значению аргумента num1 в случае, 
	//если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
	bool set_num1(double num1) {

		if (num1 != 0)
		{
			this->num1 = num1;
		}
		return (num1 == 0) ? false : true;

	};
	//метод должен установить значение поля num2 равное значению аргумента num2 в случае, 
	//если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
	bool set_num2(double num2) {
		if (num2 != 0)
		{
			this->num2 = num2;
		}
		return (num2 == 0) ? false : true;

	};
};

int main()
{
	setlocale(LC_ALL, "Rus");

	double num1_1;
	double num2_2;

	Calculator calculator;

	for (;;)
	{
		for (;;)
		{
			std::cout << "Введите num1:" << std::endl;
			std::cin >> num1_1;

			if (!calculator.set_num1(num1_1))
			{
				std::cout << "Неверный ввод!" << std::endl;
				continue;
			}

			if (calculator.set_num1(num1_1))
			{
				break;
			}
		}

		for (;;)
		{
			std::cout << "Введите num2:" << std::endl;
			std::cin >> num2_2;

			if (!calculator.set_num2(num2_2))
			{
				std::cout << "Неверный ввод!" << std::endl;
				continue;
			} std::cout << std::endl;
			if (calculator.set_num2(num2_2))
			{
				break;
			}
		}
		calculator.add();
		calculator.multiply();
		calculator.subtract_1_2();
		calculator.subtract_2_1();
		calculator.divide_1_2();
		calculator.divide_2_1();
	}
}

