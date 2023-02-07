#include <iostream>
#include <string>
using namespace std;

#include "Figure.h"
#include "Triangle.h"
#include "Equilateral_triangle.h"
#include "Isosceles_triangle.h"
#include "Rectangular_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangl.h"
#include "Square.h"
#include "Rhomb.h"

//class Figure
//{
//public:
//	Figure() :Figure(0, "Фигура:") {};
//
//	void print_info()
//	{
//		cout << name << "\n" << get_sides() << get_corn() << "" << " " << " " << "\n"; // 
//	}
//protected:
//	Figure(int sides_count, string name)
//	{
//		this->sides_count = sides_count;
//		this->name = name;
//	}
//
//	virtual string get_sides()
//	{
//		return " ";
//	}
//	virtual string get_corn()
//	{
//		return " ";
//	}
//	int get_sides_count()
//	{
//		return sides_count;
//	}
//
//	int sides_count;
//	string name;
//
//};


// Треугольник
//class Triangle : public Figure
//{
//public:
//	Triangle() :Triangle(3, "Треугольник:") {};
//	Triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, 3, "Треугольник:") {};
//
//protected:
//	Triangle(int sides_count, string name)
//	{
//		this->name = name;
//		this->sides_count = sides_count;
//	}
//	Triangle(int a, int b, int c, int A, int B, int C, int sides_count, string name)
//	{
//
//
//		{
//			this->a = a; this->b = b; this->c = c;
//			this->A = A; this->B = B; this->C = C;
//			this->name = name;
//			this->sides_count = sides_count;
//		}
//	}
//
//	string get_sides()override
//	{
//		string buf = { "Стороны: a=" + to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) + "\n" };
//		return buf;
//	}
//	string get_corn() override
//	{
//		string buf = { "Углы: A=" + to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) + "\n" };
//		return buf;
//	}
//
//	int a = 0, b = 0, c = 0;
//	int A = 0, B = 0, C = 0;
//
//};


//
//// Равносторонний треугольник
//class Equilateral_triangle :public Triangle
//{
//public:
//	Equilateral_triangle(int a) :Triangle(a, a, a, 60, 60, 60, 3, "Равносторонний треугольник: ")
//	{
//
//	}
//};

// Равнобедренный треугольник
//class Isosceles_triangle :public Triangle
//{
//public:
//	Isosceles_triangle(int a, int c, int A, int B) :Triangle(a, a, c, A, B, A, 3, "Равнобедренный треугольник: ")
//	{
//
//	}
//};

// Прямоугольный треугольник
//class Rectangular_triangle :public Triangle
//{
//public:
//	Rectangular_triangle(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90, 3, "Прямоугольный треугольник: ")
//	{
//
//	}
//};

// Четырехугольник
//class Quadrangle : public Figure
//{
//public:
//	Quadrangle() { };
//
//	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, d, A, B, C, D, 4, "Четырехугольник:") {};
//
//protected:
//	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, int sides_count, string name)
//	{
//		this->a = a; this->b = b; this->c = c; this->d = d;
//		this->A = A; this->B = B; this->C = C; this->D = D;
//		this->name = name;
//		this->sides_count = sides_count;
//	}
//	string get_sides() override
//	{
//		string buf = { "Стороны: a=" + to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) + " d=" + to_string(d) + "\n" };
//		return buf;
//	}
//	string get_corn() override
//	{
//		string buf = { "Углы: A=" + to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) + " D=" + to_string(D) + "\n" };
//		return buf;
//	}
//
//	int a = 0, b = 0, c = 0, d = 0;
//	int A = 0, B = 0, C = 0, D = 0;
//};

// Параллелограмм
//class Parallelogram : public Quadrangle
//{
//public:
//	Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B, 4, "Параллелограм: ")
//	{
//
//	}
//protected:
//	Parallelogram(int a, int b, int A, int B, int sides_count, string name) :Quadrangle(a, b, a, b, A, B, A, B, sides_count, name)
//	{
//
//	}
//};

// Прямоугольник
//class Rectangl : public Parallelogram
//{
//public:
//	Rectangl(int a, int b) :Parallelogram(a, b, 90, 90, 4, "Прямоугольник: ")
//	{
//
//	}
//protected:
//	Rectangl(int a, int b, int sides_count, string name) :Parallelogram(a, b, 90, 90, sides_count, name)
//	{
//
//	}
//};

// Квадрат
//class Square : public Rectangl
//{
//public:
//	Square(int a) :Rectangl(a, a, 4, "Квадрат: ")
//	{
//
//	}
//};

// Ромб
//class Rhomb : public Parallelogram
//{
//public:
//	Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B, 4, "Ромб: ")
//	{
//
//	}
//};


// Вывод в консоль
void print_info(Figure* print)
{
	print->print_info();
}

int main()
{
	setlocale(LC_ALL, "Russian");

/*	Figure figure = {}; */                                 // Фигура
	Triangle triangle = { 10,20,30,50,60,70 };           // Треугольник
	Rectangular_triangle r_triagle = { 10,20,30,50,60 }; // Прямоугольный треугольник
	Isosceles_triangle i_triagle = { 10,20,10,60 };      // Равнобедренный треугольник
	Equilateral_triangle e_triagle = { 10 };             // Равносторонний треугольник

	Quadrangle quadrangle = { 10,20,30,40,50,60,70,80 };// Четырехугольник
	Rectangl rectangle = { 10,20 };                     // Прямоугольник
	Square square = { 20 };                             // Квадрат
	Parallelogram parallelogram = { 20,30,30,40 };      // Параллелограмм
	Rhomb rhomb = { 30,30,40 };                         // Ромб


	/*Figure* p_figure = &figure;*/
	Figure* p_triangle = &triangle;                     // Треугольник
	Figure* p_rectangular_triangle = &r_triagle;        // Прямоугольный треугольник
	Figure* p_isosceles_triangle = &i_triagle;          // Равнобедренный треугольник
	Figure* p_equilateral_triangle = &e_triagle;        // Равносторонний треугольник

	Figure* p_quadrangle = &quadrangle;                 // Четырехугольник
	Figure* p_rectangle = &rectangle;                   // Прямоугольник
	Figure* p_square = &square;                         // Квадрат
	Figure* p_parallelogram = &parallelogram;           // Параллелограмм
	Figure* p_rhomb = &rhomb;                           // Ромб


	// Вывод
	//print_info(p_figure);
	print_info(p_triangle);                             // Треугольник
	print_info(p_rectangular_triangle);                 // Прямоугольный треугольник
	print_info(p_isosceles_triangle);                   // Равнобедренный треугольник
	print_info(p_equilateral_triangle);                 // Равносторонний треугольник

	print_info(p_quadrangle);                           // Четырехугольник
	print_info(p_rectangle);                            // Прямоугольник
	print_info(p_square);                               // Квадрат
	print_info(p_parallelogram);                        // Параллелограмм
	print_info(p_rhomb);                                // Ромб
}