#include <string>
#include "class_Fraction.h"

int NOD(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	if (b % a == 0)
	{
		return a;
	}


	if (a > b)
	{
		return NOD(a - b, b);
	}
	if (a < b)
	{
		return NOD(a, b - a);
	}
	return 0;
}

int Fraction::get_numerator() const //дл€ перегруженногоо оператора <<
{
	return this->numerator_;
};
int Fraction::get_denominator() const //дл€ перегруженногоо оператора <<
{
	return this->denominator_;
};

Fraction Fraction::MakeShortenFraction(int a, int b)
{
	int x = NOD(a, b);
	if (x <= 0)
	{
		return Fraction(a, b);
	};
	return Fraction(a / x, b / x);
}


Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

std::string Fraction::print_info() const
{
	return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}

Fraction Fraction::operator+(const Fraction& other) const
{
	int a = (numerator_ * other.denominator_) + (other.numerator_ * denominator_);
	int b = denominator_ * other.denominator_;

	return  MakeShortenFraction(a, b);
}

Fraction Fraction::operator-(const Fraction& other) const
{
	int a = (numerator_ * other.denominator_) - (other.numerator_ * denominator_);
	int b = denominator_ * other.denominator_;

	return  MakeShortenFraction(a, b);
}

Fraction Fraction::operator*(const Fraction& other) const
{
	int a = (numerator_ * other.numerator_);
	int b = denominator_ * other.denominator_;

	return  MakeShortenFraction(a, b);
}

Fraction Fraction::operator/(const Fraction& other) const
{
	int a = (numerator_ * other.denominator_);
	int b = denominator_ * other.numerator_;

	return  MakeShortenFraction(a, b);
}

Fraction Fraction::operator++()
{
	*this = MakeShortenFraction(numerator_ + denominator_, denominator_);
	return *this;
}

Fraction Fraction::operator++(int) // постфиксна€
{
	Fraction temp = *this;
	++(*this);
	return temp;
}

Fraction Fraction::operator--()
{
	numerator_ -= denominator_;

	return  MakeShortenFraction(numerator_, denominator_);
}

Fraction Fraction::operator--(int) //постфиксна€
{
	Fraction temp = *this;
	--(*this);
	return temp;
}


