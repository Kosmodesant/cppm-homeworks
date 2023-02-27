#include <iostream>
#include <windows.h>
#include <locale.h>
#include "LeaverDynamicLibrary.h"

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	Leaver leaver;

	cout << "Введите имя: " << name << endl;
	cin >> name;
	cout << leaver.leave(name);

	return 0;
}