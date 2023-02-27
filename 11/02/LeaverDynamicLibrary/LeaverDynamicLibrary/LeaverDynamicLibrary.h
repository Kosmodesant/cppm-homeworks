#pragma once

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIBRARY_API __declspec(dllimport)

#endif

#include <string>

using namespace std;

class Leaver
{
public:
	LEAVERDYNAMICLIBRARY_API string leave(string name);
};