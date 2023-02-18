#pragma once
#include <string>

static int NOD(int a, int b); // наибольший общий делитель

class Fraction
{
private:
	int numerator_;
	int denominator_;


	static Fraction MakeShortenFraction(int a, int b);


public:
	Fraction(int numerator, int denominator);

	int get_numerator()const; //для перегруженногоо оператора <<
	int get_denominator()const; //для перегруженногоо оператора <<

	std::string print_info() const;

	Fraction operator+(const Fraction& other) const;

	Fraction operator-(const Fraction& other) const;

	Fraction operator*(const Fraction& other) const;

	Fraction operator/(const Fraction& other) const;

	Fraction operator++();

	Fraction operator++(int); // постфиксная

	Fraction operator--();

	Fraction operator--(int); //постфиксная

};
