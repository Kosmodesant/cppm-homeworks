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