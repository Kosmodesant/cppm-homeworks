#include <iostream>
#include <string>

using namespace std;

// Фигура
class Figure
{
public:
	Figure() : sides_count(0), name("Фигура:") { check_func(); };


	void print_info()
	{
		cout << name << "\n" << check << "\n" << "Количество сторон: " << sides_count << "\n" << get_sides() << get_corn() << "" << " " << " " << "\n";
	}

protected:
	Figure(const int& sides_count, const string& name) :sides_count(0), name("Фигура:")
	{

	}

	virtual bool check_bool()
	{
		if (sides_count == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	virtual void check_func()

	{
		if (check_bool())
		{
			check = "Правильная";
		}
		else {
			check = "Неправильная";
		}
	}

	virtual string get_sides()
	{
		return " ";
	}
	virtual string get_corn()
	{
		return " ";
	}

	int sides_count;
	string name;
	string sides;
	string corn;
	string check;

};

// Треугольник
class Triangle : public Figure
{
public:
	Triangle() :Figure(3, "Треугольник")
	{

	}
	Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C) :Triangle(a, b, c, A, B, C, 3, "Треугольник:")
	{

	}

protected:
	Triangle(const int& a, const int& b, const int& c, const int& A, const int& B, const int& C, const int& sides_count, const string& name)
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = name;
		this->sides_count = sides_count;
		check_func();
	}

	string get_sides() override
	{
		string buf = { "Стороны: a=" + to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) + "\n" };
		return buf;
	}
	string get_corn() override
	{
		string buf = { "Углы: A=" + to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) + "\n" };
		return buf;
	}

	bool check_bool() override
	{
		if ((A + B + C) == 180)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int a = 0, b = 0, c = 0;
	int A = 0, B = 0, C = 0;
};

// Равносторонний треугольник
class Equilateral_triangle :public Triangle
{
public:
	Equilateral_triangle(int a) :Triangle(a, a, a, 60, 60, 60, 3, "Равносторонний треугольник: ")
	{

	}
protected:
	bool check_bool() override
	{
		if ((Triangle::check_bool()) && (a == b) && (b == c) && (c == a))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

// Равнобедренный треугольник
class Isosceles_triangle :public Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A, 3, "Равнобедренный треугольник: ")
	{

	}
protected:
	bool check_bool() override
	{
		if ((Triangle::check_bool()) && (a == c) && (A == C))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

// Прямоугольный треугольник
class Rectangular_triangle :public Triangle
{
public:
	Rectangular_triangle(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90, 3, "Прямоугольный треугольник: ")
	{

	}

protected:
	bool check_bool() override
	{
		if ((Triangle::check_bool()) && (C == 90))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

// Четырехугольник
class Quadrangle : public Figure
{
public:
	Quadrangle() :Figure(4, "Четырехугольник:") {}

	Quadrangle(const int& a, const int& b, const int& c, const int& d, const int& A, const int& B, const int& C, const int& D) :Quadrangle(a, b, c, d, A, B, C, D, 4, "Четырехугольник:") {}

protected:
	Quadrangle(const int& a, const int& b, const int& c, const int& d, const int& A, const int& B, const int& C, const int& D, const int& sides_count, const string& name)
	{
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = name;
		this->sides_count = sides_count;
		check_func();
	}

	string get_sides()
	{
		string buf = { "Стороны: a=" + to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) + " d=" + to_string(d) + "\n" };
		return buf;
	}

	string get_corn()
	{
		string buf = { "Углы: A=" + to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) + " D=" + to_string(D) + "\n" };
		return buf;
	}

	bool check_bool() override
	{
		if ((A + B + C + D) == 360)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int a = 0, b = 0, c = 0, d = 0;
	int A = 0, B = 0, C = 0, D = 0;
};


// Параллелограм
class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B, 4, "Параллелограм: ")
	{

	}
protected:
	Parallelogram(int a, int b, int A, int B, int sides_count, string name) :Quadrangle(a, b, a, b, A, B, A, B, sides_count, name)
	{

	}

	bool check_bool() override
	{
		if ((Quadrangle::check_bool()) && (a == c && b == d) && (A == C && B == D))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


// Прямоугольник
class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b) :Parallelogram(a, b, 90, 90, 4, "Прямоугольник: ")
	{

	}

protected:
	Rectangle(int a, int b, int sides_count, string name) :Parallelogram(a, b, 90, 90, sides_count, name)
	{

	}

	bool check_bool() override
	{
		if ((a == c && b == d) && a != b && (A == 90 && B == 90 && C == 90 && D == 90))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

// Квадрат
class Square : public Rectangle
{
public:
	Square(int a) :Rectangle(a, a, 4, "Квадрат: ")
	{

	}
protected:
	bool check_bool() override
	{
		if ((a == c && b == d) && (a == b && c == d) && (A == 90 && B == 90 && C == 90 && D == 90))
		{
			this->check = "Правильная";
			return true;
		}
		else
		{
			this->check = "Неправильная";
			return false;
		}
	}
};

// Ромб
class Rhomb : public Parallelogram
{
public:
	Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B, 4, "Ромб: ")
	{

	}

protected:
	bool check_bool() override
	{
		if ((a == c && b == d) && (a == b && c == d) && (A == C && B == D) && (A + B == 180))
		{
			this->check = "Правильная";
			return true;
		}
		else
		{
			this->check = "Неправильная";
			return false;
		}
	}
};

// Вывод в консоль
void print_info(Figure* print)
{
	print->print_info();
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Figure figure = {};                                     // фигура
	Triangle triagle = { 10,20,30,50,60,70 };               // треугольник
	Rectangular_triangle r_triangle = { 10,20,30,60,60 };   // прямоугольный треугольник
	Isosceles_triangle i_triangle = { 10,20,50,60 };        // равнобедренный треугольник
	Equilateral_triangle e_triangle = { 10 };               // равносторонний треугольник

	Quadrangle quadrangle = { 10,20,30,40,100,100,70,80 };  // четырехугольник
	Parallelogram parallelogram = { 20,30,30,40 };          // параллелограмм
	Rectangle rectangle = { 10,20 };                        // прямоугольник
	Square square = { 20 };                                 // квадрат
	Rhomb rhomb = { 10,126,54 };                            // ромб

	Figure* p_figure = &figure;
	Figure* p_triangle = &triagle;
	Figure* p_equilateral_triangle = &e_triangle;
	Figure* p_isosceles_triangle = &i_triangle;
	Figure* p_rectangular_triangle = &r_triangle;

	Figure* p_rectangle = &rectangle;
	Figure* p_quadrangle = &quadrangle;
	Figure* p_square = &square;
	Figure* p_parallelogram = &parallelogram;
	Figure* p_rhomb = &rhomb;


	print_info(p_figure);
	print_info(p_triangle);
	print_info(p_rectangular_triangle);
	print_info(p_isosceles_triangle);
	print_info(p_equilateral_triangle);

	print_info(p_quadrangle);
	print_info(p_rectangle);
	print_info(p_square);
	print_info(p_parallelogram);
	print_info(p_rhomb);
}