//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//            God Bless         No Bugs
//


#include <iostream>
#include <windows.h>
#include <locale.h>
#include "Menu.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int rows = 7;
	int colums = 3;

	string** p_transports = new string * [rows];

	string transports2[7] = { "Ботинки-вездеходы. ","Метла. ", "Верблюд. ", "Кентавр. ", "Орел. ", "Верблюд-быстроход. ", "Ковёр-самолёт. " };

	for (int i = 0; i < rows - 1; i++)
	{
		p_transports[i] = new string[colums];
	}

	for (int i = 0; i < rows - 1; i++)
	{
		p_transports[i][0] = transports2[i];
	}

	string buf_string;

	int distance = 0; // дистанция
	int count = 0; // счетчик зарегистрированных транспортных средств
	int game_type = 0; // тип игры


	cout << " *****Добро пожаловать в гоночный симулятор!***** " << "\n" << "\n";
	while (true)
	{
		int buf = 666; // :)

		Menu menu;

		while (true) // menu 1
		{
			if (menu.menu1_in(buf_string, game_type))
			{
				cout << endl;
				break;
			}
			else
			{
				cerr << "Неизвестный тип гонки! \n";
			};
		}


		while (true) // menu 2
		{
			if (menu.menu2_in(buf_string, distance))
			{
				cout << endl;
				break;
			}
			else
			{
				cerr << "Дистанция не соответствует условиям! \n";
			};

		}
		

		while (true) // menu 3
		{
			menu.menu3();
			if (menu.menu3_in())
			{
				cout << endl;
				break;
			};
		}


		while (true) // menu 4
		{

			if (menu.menu4_in(buf_string, distance, count, game_type, p_transports))
			{
				cout << endl;
				break;
			}
			else
			{
				cerr << "Неверный пункт меню! \n";
			};
		}



		while (true) // menu 5
		{
			menu.menu5();

			unsigned buf_int = 66;
			buf_int = menu.menu5_in();

			if (buf_int == 1)
			{
				menu.menu4_in(buf_string, distance, count, game_type, p_transports);
			}
			else if (buf_int == 2)
			{
				cout << endl; break;
			}

		}
		

		while (true) // menu results
		{
			if (menu.menu_results(p_transports, rows))
			{
				break;
			};
		}



		while (true) // reset results
		{
			int buf_int = (menu.menu6_in());

			if (buf_int == 1)
			{
				for (int i = 0; i < rows - 1; i++)
				{
					p_transports[i][1] = "0";
					p_transports[i][2] = "0";
				}

				count = 0;
				distance = 0;
				buf = 0;
				buf_string = "";
				game_type = 0;
				break;
			}

			else if (buf_int == 2)

			{
				for (int i = 0; i < rows - 1; i++)
				{
					delete[]p_transports[i];
				}

				//  delete all
				return 0;
			}
			else{
				cerr << "Неверный пункт меню! \n";
				continue;
			}
			break;
		}
	}
	return 0;
}
