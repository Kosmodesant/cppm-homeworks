#include <iostream>
using namespace std;

struct rekvizity
{

	int account_number;
	string name;
	int balance;
	int new_balance;
};

int main() {

	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	rekvizity r;

	cout << "Введите номер счета: ";
	cin >> r.account_number;

	cout << "Введите имя владельца: ";
	cin >> r.name;

	cout << "Введите баланс: ";
	cin >> r.balance;

	cout << "Введите новый баланс: ";
	cin >> r.new_balance;

	cout << "Ваш счёт: " << r.name << ',' << r.account_number << ',' << r.new_balance;

}