#include "Orel.h"

Orel::Orel() :Orel("orel", 8) {}

double Orel::metod_finish(const int distance) 
{
    return metod_sokrashenia(distance) / speed_transport;
}

Orel::Orel(const std::string &name, int speed) :Air_Transport(name, speed)
{

}

double Orel::metod_sokrashenia(int distance)
{
    return distance * 0.94;
}