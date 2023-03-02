cmake_minimum_required(VERSION 3.22.0)
project(task5)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(IknowUloveGeometryDinamicLibrary SHARED
Figure.h 
Figure.cpp
Quadrangle.h 
Quadrangle.cpp
Triangle.h 
Triangle.cpp
Equilateral_triangle.h 
Equilateral_triangle.cpp
Isosceles_triangle.h 
Isosceles_triangle.cpp
Parallelogram.h 
Parallelogram.cpp
Rectangl.h 
Rectangl.cpp
Rhomb.h 
Rhomb.cpp
Rectangular_triangle.h 
Rectangular_triangle.cpp
Square.h 
Square.cpp)
add_executable(geometry main.cpp)
target_link_libraries(geometry IknowULoveGeometryDinamicLibrary)