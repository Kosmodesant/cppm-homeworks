#pragma once

#include "All_Transport.h"

using namespace std;

class Menu
{
public:
	Menu();

	void menu1() const;

	bool menu1_in(string& buf_string, int& game_type);

	void menu2(string& buf_string) const;

	bool menu2_in(string& buf_string, int& distance);

	void menu3() const;

	bool menu3_in();

	void menu4(string& buf_string) const;

	bool menu4_in(string& buf_string, const int& distance, int& count, const int& game_type, string** transports);

	void menu5() const;

	int menu5_in();

	bool menu_results(string** transports, int rows) const;

	int menu6_in();
};