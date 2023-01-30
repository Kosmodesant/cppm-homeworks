#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Address
{
public:

	Address()
	{
		city = "none";
		street = "none";
		house = 0;
		flat = 0;
	}

	Address(string city_, string street_, int house_, int flat_)
	{
		city = city_;
		street = street_;
		house = house_;
		flat = flat_;
	}

	string stroka() //создаем строку
	{
		string s = this->city + ", " + this->street + ", " + to_string(this->house) + ", " + to_string(this->flat) + "\n";
		return s;
	}

	string read_city()
	{
		return this->city;
	}

	void sort_Address_array(Address* Address_array, int size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i; j > 0; j--)
			{
				if (Address_array[j].read_city() > Address_array[j + 1].read_city())
				{
					swap(Address_array[j], Address_array[j + 1]);
				}
			}
		}
	}

private:
	string city;
	string street;
	int house;
	int flat;
};

int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");

	int size = 0;
	string city = "a";
	string street = "a";
	int house = 0;
	int flat = 0;
	string string_buf;

	fin >> string_buf;
	fout << string_buf << "\n";
	size = 5;

	Address* Address_array = new Address[size];

	for (int i = 0; i < size; i++)
	{
		fin >> city >> street >> house >> flat;
		Address_array[i] = { city, street, house, flat };
	}

	Address_array->sort_Address_array(Address_array, size);

	for (int i = 0; i < size; i++)
	{
		fout << Address_array[i].stroka();
	}

	delete[] Address_array;

	fin.close();
	fout.close();
}

