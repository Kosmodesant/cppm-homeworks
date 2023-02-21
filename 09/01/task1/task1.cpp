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

	bool operator == (const Fraction& other) const
	{
		return numerator_ * other.denominator_ == other.numerator_ * denominator_;
	};

	bool operator != (const Fraction& other) const
	{
		return !(this->operator == (other));

	};

	bool operator < (const Fraction& other) const
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

	bool operator > (const Fraction& other) const // bug fix
	{
		int a, b;
		a = numerator_ * other.denominator_;
		b = other.numerator_ * denominator_;
		if (a > b)
		{
			return true;
		}
		else
		{
			return false;
		}
		/*	return !(this->operator < (other));*/
	};


	bool operator <= (const Fraction& other) const
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

	bool operator >= (const Fraction& other) const // bug fix
	{
		//return !(this->operator <= (other));

		if (this->operator>(other) || this->operator==(other))
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};


int main()
{

	Fraction f1(4, 3);
	Fraction f2(4, 3);

	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1  < f2) ? "  < " : " not <  ") << "f2" << '\n';
	cout << "f1" << ((f1  > f2) ? "  > " : " not >  ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}