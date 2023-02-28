#pragma once
#include "Parallelogram.h"


	class Rectangl : public Parallelogram
	{
	public:
		GEOMETRYLIBRARY_API Rectangl(int a, int b);
	protected:
		GEOMETRYLIBRARY_API  Rectangl(int a, int b, int sides_count, string name);
	};
