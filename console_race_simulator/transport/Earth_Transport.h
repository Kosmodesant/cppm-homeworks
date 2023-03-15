#pragma once
#include "Transport.h"

class Earth_Transport :protected Transport
{
public:
	Earth_Transport();
	double metod_finish1(const int distance) override;

protected:
	Earth_Transport(std::string name, int speed, int stamina);
	int stamina_transport; // Время движения до отдыха для наземного транспорта
};

