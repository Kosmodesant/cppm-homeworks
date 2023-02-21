#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	cout << "Введите имя: " << endl;
	cin >> name;
	cout << "Здравствуйте, " << name << "!" << endl;

	return 0;
}