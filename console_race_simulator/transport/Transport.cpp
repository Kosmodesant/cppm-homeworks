#include "Transport.h"

Transport::Transport()
{
	type_transport = "uknow";
	name_transport = "uknow";
	speed_transport = 0;
}
int Transport::metod_finish(int distance) { return 0; }
double Transport::metod_finish1(int distance) { return 0; }
Transport::Transport(std::string type, std::string name, int speed)
{
	type_transport = type;
	name_transport = name;
	speed_transport = speed;
};