#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Adress
{
public:

	Adress()
	{
		city = "none";
		street = "none";
		house = 0;
		flat = 0;
	}

	Adress(string city_, string street_, int house_, int flat_)
	{
		city = city_;
		street = street_;
		house = house_;
		flat = flat_;
	}

	string stroka() //создаем строку
	{
		string stroka_ = this->city + ", " + this->street + ", " + to_string(this->house) + ", " + to_string(this->flat) + "\n";
		return stroka_;
	}

private:
	string city;
	string street;
	int house;
	int flat;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream fin("in.txt");
	ofstream fout("out.txt");

	string city = "none";
	string street = "none";
	int house = 0;
	int flat = 0;
	int size = 0;
	string string_buf;

	fin >> string_buf;
	fout << string_buf << "\n";

	size = stoi(string_buf);
	Adress* Adress_array = new Adress[size];

	for (int i = 0; i < size; i++)
	{
		fin >> city >> street >> house >> flat;
		Adress_array[i] = { city, street, house, flat };
	}

	for (int i = size - 1; i >= 0; i--)
	{
		fout << Adress_array[i].stroka();
	}

	delete[] Adress_array;
	fin.close();
	fout.close();
}