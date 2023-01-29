
#include <iostream>
using namespace std;


class Calculator
{
private:
	double num1;
	double num2;
public:
	double get_num1() { return num1; };
	double get_num2() { return num2; };
	//метод должен возвращать результат сложения num1 и num2
	double add() {
		return num1 + num2;
	};

	//метод должен возвращать результат перемножения num1 и num2
	double multiply() {
		return num1 * num2;
	};

	//метод должен возвращать результат вычитания num2 из num1
	double subtract_1_2() {
		return num2 - num1;
	};

	//метод должен возвращать результат вычитания num1 из num2
	double subtract_2_1() {
		return num1 - num2;
	};
	//метод должен возвращать результат деления num1 на num2
	double divide_1_2() {
		return num1 / num2;
	};
	//метод должен возвращать результат деления num2 на num1
	double divide_2_1() {
		return num2 / num1;
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
			cout << "Введите num1:" << endl;
			cin >> num1_1;

			if (!calculator.set_num1(num1_1))
			{
				cout << "Неверный ввод!" << endl;
				continue;
			}

			else
			{
				break;
			}
		}

		for (;;)
		{
			cout << "Введите num2:" << endl;
			cin >> num2_2;

			if (!calculator.set_num2(num2_2))
			{
				cout << "Неверный ввод!" << endl;
				continue;
			}
			else
			{
				break;
			}
		}

		cout << "num1 + num2 = " << calculator.add() << endl
			<< "num1 - num2 = " << calculator.multiply() << endl
			<< "num2 - num1 = " << calculator.subtract_1_2() << endl
			<< "num1 * num2 = " << calculator.subtract_2_1() << endl
			<< "num1 / num2 = " << calculator.divide_1_2() << endl
			<< "num2 / num1 = " << calculator.divide_2_1() << endl;

	}
}

