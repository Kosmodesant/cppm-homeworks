#pragma once
#include <string>

class Transport
{
public:
	Transport();

protected:
	std::string name_transport;
	std::string type_transport;
	int speed_transport;
	Transport(std::string type, std::string name, int speed);
	virtual int metod_finish(int distance);
	virtual double metod_finish1(int distance);
};

