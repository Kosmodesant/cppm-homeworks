﻿//Задача 1. Сравнения в дробях
//В этом задании вы переопределите операторы сравнения для дробей.
//
//Дан код на C++:
//
//#include <iostream>
//
//class Fraction
//{
//private:
//	int numerator_;
//	int denominator_;
//
//public:
//	Fraction(int numerator, int denominator)
//	{
//		numerator_ = numerator;
//		denominator_ = denominator;
//	}
//};
//
//int main()
//{
//	Fraction f1(4, 3);
//	Fraction f2(6, 11);
//
//	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
//	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
//	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
//	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
//	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
//	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
//	return 0;
//}
//Ваша задача — дописать класс Fraction так, чтобы программа компилировалась и работала корректно.
//
//Пример работы программы
//Консоль
//f1 not == f2
//f1 != f2
//f1 not < f2
//	f1 > f2
//	f1 not <= f2
//	f1 >= f2
//	Подсказки
//	Не читайте этот раздел сразу.Попытайтесь сначала решить задачу самостоятельно : )
//
//	Что использовать для решения.
//	Чтобы код компилировался, вам нужно перегрузить операторы сравнения.
//
//	Не забудьте, что уникальный код можно написать всего для двух операторов сравнения, остальные можно определить через них.



#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	};

	bool operator==( Fraction& other)
	{
		return numerator_ * other.denominator_ == other.numerator_ * denominator_;
	};

	bool operator!=(const Fraction& other) const
	{
		return !(this->operator==(other));

	};

	bool operator<(const Fraction& other) const
	{
		int a, b;
		a = numerator_ * other.denominator_;
		b = other.numerator_ * denominator_;
		if (a < b)
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	bool operator>(const Fraction& other) const
	{
		return !(this->operator<(other));
	};

	bool operator<=(const Fraction& other) const
	{
		if (this->operator<(other) || this->operator==(other))
		{
			return true;
		}
		else
		{
			return false;
		}

	};

	bool operator>=(const Fraction& other) const
	{
		return !(this->operator<=(other));
	};
};


int main()
{

	Fraction f1(4, 3);
	Fraction f2(6, 11);

	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}