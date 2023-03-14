#pragma once
#include "Transport.h"

class Earth_Transport :protected Transport
{
public:
	Earth_Transport();
	virtual int metod_finish(const int distance);

protected:
	Earth_Transport(std::string name, int speed, int stamina);
	int stamina_transport; // Время движения до отдыха для наземного транспорта
};

