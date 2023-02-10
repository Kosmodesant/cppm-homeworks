#include <iostream>
#include <string>

using namespace std;

#define MODE 1
#ifndef MODE
#error MODE небыл оределен
#endif

#if MODE == 1

int add(int a, int b)
{
	return a + b;
}
#endif

int main()
{
	setlocale(LC_ALL, "Russian");

#if MODE==0
	cout << "Работаю в режиме тренировки";
	return 0;
#elif MODE==1
	int a = 0, b = 0;
	cout << "Работаю в боевом режиме" << "\n";
	cout << "Введите число 1: " << "\n";
	cin >> a;
	cout << "Введите число 2: " << "\n";
	cin >> b;
	cout << "Результат сложения: " << add(a, b) << "\n";
	return 0;
#else
	cout << "Неизвестный режим. Завершение работы";
	return 1;
#endif
}
