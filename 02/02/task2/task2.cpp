#include <iostream>
#include <Windows.h>
using namespace std;

struct rekvizity
{
	int number;
	string name;
	int balance;
};


void edit_balance(rekvizity& p) {
	int newBalance;
	cin >> newBalance;
	p.balance = newBalance;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	rekvizity r;

	cout << "Введите номер счёта: ";
	cin >> r.number;

	cout << "Введите имя владельца: ";
	cin >> r.name;

	cout << "Введите баланс: ";
	cin >> r.balance;

	cout << "Введите новый баланс: ";
	edit_balance(r);

	cout << "Ваш счёт : " << r.name << ", " << r.number << ", " << r.balance << std::endl;

	return 0;
}