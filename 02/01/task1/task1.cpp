#include <iostream>
#include <string>;

enum class months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
};

void print_month(const months& month)
{
	switch (month)
	{
	case months::January: std::cout << "Январь" << std::endl;
		break;
	case months::February: std::cout << "Февраль" << std::endl;
		break;
	case months::March: std::cout << "Март" << std::endl;
		break;
	case months::April: std::cout << "Апрель" << std::endl;
		break;
	case months::May: std::cout << "Май" << std::endl;
		break;
	case months::June: std::cout << "Июнь" << std::endl;
		break;
	case months::July: std::cout << "Июль" << std::endl;
		break;
	case months::August: std::cout << "Август" << std::endl;
		break;
	case months::September: std::cout << "Сентябрь" << std::endl;
		break;
	case months::October: std::cout << "Октябрь" << std::endl;
		break;
	case months::November: std::cout << "Ноябрь" << std::endl;
		break;
	case months::December: std::cout << "Декабрь" << std::endl;
		break;
	default: std::cout << "Неправильный номер!"; \
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number_month = 1;

	while (number_month != 0)
	{
		std::cout << "Введите номер месяца: " << std::endl;
		std::cin >> number_month;

		if (number_month == 0) { std::cout << "До свидания"; break; };

		months month = static_cast<months>(number_month);
		print_month(month);
	}
}