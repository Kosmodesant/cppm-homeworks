#include <iostream>
#include <windows.h>
#include "GreeterStaticLibrary.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	Greeter greater;

	cout << "Введите имя: " << endl;
	cin >> name;
	cout << greater.greet(name);

	return 0;
}