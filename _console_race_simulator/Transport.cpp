#include "Transport.h"

Transport::Transport()
{
	type_transport = "uknow";
	name_transport = "uknow";
	speed_transport = 0;
}

Transport::Transport(std::string type, std::string name, int speed)
{
	type_transport = type;
	name_transport = name;
	speed_transport = speed;
};