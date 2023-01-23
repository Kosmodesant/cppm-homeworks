#include <iostream>
#include <string>
using namespace std;

struct adres
{
	string city; 
	string street; 
	int House_number; 
	int Apartament_number; 
	int index;
};

void Print_addres(const adres& Addres_array)
{
	    cout << endl
		<< "Город: " << Addres_array.city << endl
		<< "Улица: " << Addres_array.street << endl
		<< "Номер дома: " << Addres_array.House_number << endl
		<< "Номер квартиры: " << Addres_array.Apartament_number << endl
		<< "Индекс: " << Addres_array.index << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	adres Adres_p1 = {"Москва", "Арбат", 12, 8, 123456 };
	adres Adres_p2 = {"Ижевск", "Пушкина", 59, 143, 953769 };

	Print_addres(Adres_p1);
	Print_addres(Adres_p2);
}