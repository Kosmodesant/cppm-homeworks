#include "Earth_Transport.h"

Earth_Transport::Earth_Transport()
{
	type_transport = "Earth";
	name_transport = "uknow";
	speed_transport = 0;
	stamina_transport = 0;
}
Earth_Transport::Earth_Transport(std::string name, int speed, int stamina) :Transport("Eart", name, speed)
{
	stamina_transport = stamina;
}
double Earth_Transport::metod_finish1(const int distance) { return 0; }