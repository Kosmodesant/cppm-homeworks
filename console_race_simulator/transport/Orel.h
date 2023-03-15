#pragma once
#include "Air_Transport.h"
class Orel : protected Air_Transport
{
public:  
    Orel();
    double metod_finish1(const int distance) override;

protected:
    Orel(const std::string &name, int speed);
    double metod_sokrashenia(const int distance);
};

