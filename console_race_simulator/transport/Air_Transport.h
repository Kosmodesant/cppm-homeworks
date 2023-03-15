#pragma once
#include "Transport.h"

class Air_Transport :  protected Transport
{
public: 
	Air_Transport();
	double metod_finish1(const int distance) override;

protected:
	Air_Transport(std::string name, int speed);
};