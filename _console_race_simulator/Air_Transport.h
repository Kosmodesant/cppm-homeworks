#pragma once
#include "Transport.h"

class Air_Transport :  protected Transport
{
public: 
	Air_Transport();
	
	virtual double metod_finish(int distance);

protected:
	Air_Transport(std::string name, int speed);
};