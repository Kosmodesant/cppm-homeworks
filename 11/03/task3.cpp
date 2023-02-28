#include <iostream>
#include <stdlib.h>
#include <windows.h>

#include "LeaverDynamicLibrary.h"

using namespace std;

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