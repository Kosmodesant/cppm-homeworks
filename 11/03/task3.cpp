#include <iostream>
#include <windows.h>
#include "LeaverDynamicLibrary.h"

// total_hours_wasted_here = 0.5 :)

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;

	Leaver leaver;

	cout << "¬ведите им€: " << name << endl;
	cin >> name;
	cout << leaver.leave(name);

	return 0;
}