#include <iostream>
#include <string>

using namespace std;

int function(string str, int forbidden_length) {
	if (forbidden_length == str.length()) { throw exception("Вы ввели слово запретной длины! До свидания"); }
	return str.length();
}


int main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	int forbidden_length;

	cout << "Введите запретную длину : \n";
	cin >> forbidden_length;

	while (true) {
		try
		{
			cout << "Введите слово: ";
			cin >> str;

			cout << "Длина слова " << '"' << str << '"' << " равна " << function(str, forbidden_length) << endl;
		}
		catch (const exception& err)
		{
			cout << err.what() << endl;
			break;
		}
	}

}

