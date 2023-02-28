#pragma once

// // I've only tried a few simple spells myself, and they've all worked for me
// AVADA KEDAVRA !!!!
#ifdef GEOMETRY_EXPORTS
#define GEOMETRYLIBRARY_API __declspec(dllexport)
#else
#define GEOMETRYLIBRARY_API __declspec(dllimport)
#endif


#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
	GEOMETRYLIBRARY_API Figure();
	GEOMETRYLIBRARY_API void print_info();

protected:
	GEOMETRYLIBRARY_API Figure(int sides_count, string name);
	GEOMETRYLIBRARY_API virtual string get_sides();
	GEOMETRYLIBRARY_API virtual string get_corn();
	GEOMETRYLIBRARY_API int get_sides_count();
	int sides_count;
	string name;
};

