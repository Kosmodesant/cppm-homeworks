#include <iostream>
#include <string>
#include <stdlib.h>

#include "Menu.h"

using namespace std;

	Menu::Menu() {};
	void Menu::menu1() const
	{
		cout << " 1. Гонка для наземного транспорта " << "\n" << " 2. Гонка для воздушного транспорта " << "\n" << " 3. Гонка для наземного и воздушного транспорта" << "\n" << "\n" << endl;
		cout << " Выберите тип гонки: " << "\n";
	};

	bool Menu::menu1_in(string& buf_string, int& game_type)
	{
		int buf = 66;
		while (true)
		{
			menu1();
			cin >> buf;
			if (cin.fail())
			{
				cerr << "Неизвестный тип данных! \n";
				cin.clear();
				cin.ignore();
				continue;
			}
			if ((buf != 1) && (buf != 2) && (buf != 3)) { return false; }
			else
			{
				buf_string = (buf == 1) ? +"Гонка для наземного транспорта." :
					(buf == 2) ? +"Гонка для воздушного транспорта." : +"Гонка для наземного и воздушного транспорта.";
				game_type = (buf == 1) ? 1 :
					(buf == 2) ? 2 : 3;
			}
			break;
		}
		return true;
	};

	void Menu::menu2(string& buf_string) const
	{
		cout << buf_string << "\n" << "Укажите длину дистанции (должна быть положительная)" << "\n";
	}

	bool Menu::menu2_in(string& buf_string, int& distance)
	{
		int buf = 66;
		while (true)
		{
			menu2(buf_string);

			cin >> buf;
			if (cin.fail())
			{
				cerr << "Неверный тип данных! \n";
				cin.clear();
				cin.ignore();
				continue;
			}
			if (buf <= 0) { return false; }
			else
			{
				distance = buf;
				buf_string = buf_string + " Расстояние: " + to_string(distance) + " ";
				break;
			}
		}
		return true;
	}

	void Menu::menu3() const
	{
		cout << "Должно быть зарегистрированно минимум 2 транспортных средства \n"
			"1. Зарегистрировать транспортное средство \n"
			"Выберите действие: \n";
	}

	bool Menu::menu3_in()
	{
		int buf = 66;
		cin >> buf;
		if (cin.fail())
		{
			cerr << "Неверный тип данных! \n";
			cin.clear();
			cin.ignore();
			return false;
		}
		if (buf == 1) { return true; }
		else
		{
			return false;
		}
	}

	void Menu::menu4(string& buf_string) const
	{
		cout << buf_string << endl;
		cout <<
			"1. Ботинки-вездеходы \n"
			"2. Метла \n"
			"3. Верблюд \n"
			"4. Кентавр \n"
			"5. Орел \n"
			"6. Верблюд-быстроход \n"
			"7. Ковёр-самолёт \n"
			"0. Закончить регистрацию\n"
			"Выберите транспорт или 0 для окончания процесса регистрации: \n";
	}

	bool Menu::menu4_in(string& buf_string, const int& distance, int& count, const int& game_type, string** transports)
	{
		while (true)
		{
			menu4(buf_string);
			int buf = 66;
			cin >> buf;

			if (cin.fail())
			{
				cerr << " Введен неверный формат данных! \n";
				cin.clear();
				cin.ignore();
				continue;
			}

			if (buf == 0)
			{
				if (count > 1) { return true; }
				else { cerr << " Недостаточно транспортных средств для начала гонки! \n"; continue; }
			} // выход из цикла если условин норм 


			if (buf == 1)  //добавить провверку на тип гонки
			{
				if (game_type == 2)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}
				if (transports[0][2] != "1")
				{
					Bot_skorohod botinok; transports[0][1] = to_string(botinok.metod_finish(distance)); buf_string = buf_string + " " + transports[0][0]; transports[0][2] = "1";
					cout << transports[0][0] << " успешно зарегистрированны! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[0][0] << " Уже зарегистрирован!! \n";
					continue;
				}
			}

			if (buf == 2)
			{
				if (game_type == 1)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}
				if (transports[1][2] != "1")
				{
					Metla metla;  transports[1][1] = to_string(metla.metod_finish(distance)); buf_string = buf_string + " " + transports[1][0]; transports[1][2] = "1";
					cout << transports[1][0] << " успешно зарегистрированны! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[1][0] << " Уже зарегистрирован! \n";
					continue;
				}
			}

			if (buf == 3)
			{
				if (game_type == 2)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}

				if (transports[2][2] != "1")
				{
					Verblud verblud;  transports[2][1] = to_string(verblud.metod_finish(distance)); buf_string = buf_string + " " + transports[2][0]; transports[2][2] = "1";
					cout << transports[2][0] << " Успешно зарегистрированны! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[2][0] << " Уже зарегистрирован! \n";
				}
			}

			if (buf == 4)
			{
				if (game_type == 2)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}

				if (transports[3][2] != "1")
				{
					Kentavr kentavr;  transports[3][1] = to_string(kentavr.metod_finish(distance)); buf_string = buf_string + " " + transports[3][0]; transports[3][2] = "1";
					cout << transports[3][0] << " Успешно зарегистрированы! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[3][0] << " Уже зарегистрирован! \n";
				}
			}

			if (buf == 5)
			{
				if (game_type == 1)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}
				if (transports[4][2] != "1")
				{
					Orel orel;  transports[4][1] = to_string(orel.metod_finish(distance)); buf_string = buf_string + " " + transports[4][0]; transports[4][2] = "1";
					cout << transports[4][0] << " Успешно зарегистрированы! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[4][0] << " Уже зарегистрирован! \n";
					continue;
				}
			}

			if (buf == 6)
			{
				if (game_type == 2)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}

				if (transports[5][2] != "1")
				{
					Verblud_fast verblud_fast;  transports[5][1] = to_string(verblud_fast.metod_finish(distance)); buf_string = buf_string + " " + transports[5][0]; transports[5][2] = "1";
					cout << transports[5][0] << " Успешно зарегистрированы! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[5][0] << " Уже зарегистрирован!! \n";
				}
			}

			if (buf == 7)
			{
				if (game_type == 1)
				{
					cerr << "Попытка зарегистрировать неправильный тип транспортного средства!\n";
					continue;
				}
				if (transports[6][2] != "1")
				{
					Kover_Samolet kover_samolet;  transports[6][1] = to_string(kover_samolet.metod_finish(distance)); buf_string = buf_string + " " + transports[6][0]; transports[6][2] = "1";
					cout << transports[1][0] << " успешно зарегистрированы! \n "; count += 1;
					continue;
				}
				else
				{
					cerr << transports[6][0] << " Уже зарегистрирован!! \n";
					continue;
				}
			}

			if (buf < 0 || buf>8)
			{
				cerr << "Неверный пункт меню! \n";
				continue;
			}
		}
	}

	void Menu::menu5() const
	{
		cout << "1. Зарегистрировать транспорт \n"
			"2. Начать гонку  \n"
			"Выберите действие: ";
	}

	int Menu::menu5_in()
	{
		int buf = 66;
		while (true)
		{
			cin >> buf;
			if (cin.fail())
			{
				cerr << "Неверный формат данных! \n";
				cin.clear();
				cin.ignore();
				continue;
			}
			if (buf == 1) { return 1; }
			if (buf == 2) { return 2; }
			else
			{
				cerr << "Неверный пункт меню! \n";
				continue;
			}
		}
	}

	bool Menu::menu_results(string** transports, int rows) const
	{


		cout << "Результаты гонки: \n";



		for (int i = 0; i < rows - 1; i++)
		{
			if (transports[i][2] == "1") { cout << transports[i][0] << "Время: " << transports[i][1] << endl; }
		}
		cout << endl;
		return true;
	}

	int Menu::menu6_in()
	{
		int buf = 66;
		while (true)
		{
			cout << "1. Провести еще одну гонку \n2. Выйти \n";
			cin >> buf;

			if (cin.fail())
			{
				cerr << " Введен неверный формат данных! \n";
				cin.clear();
				cin.ignore();
				continue;
			}
			return buf;
		}
	};