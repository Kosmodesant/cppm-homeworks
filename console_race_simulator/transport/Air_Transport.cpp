#include "Air_Transport.h"

Air_Transport::Air_Transport() {
	type_transport = "Air";
	name_transport = "uknow";
	speed_transport = 0;
}

double Air_Transport::metod_finish1(int distance) { return 0; }

Air_Transport::Air_Transport(std::string name, int speed)
{
	type_transport = "Air";
	name_transport = name;
	speed_transport = speed;
};
