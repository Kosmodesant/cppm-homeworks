#pragma once
#include "Air_Transport.h"

class Metla : protected Air_Transport
{
public:
    Metla();
    double metod_finish1(const int distance) override;

protected:
    Metla(std::string name, int speed); 
    double metod_sokrashenia(const int distance);
};

