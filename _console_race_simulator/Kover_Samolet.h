#pragma once
#include "Air_Transport.h"
class Kover_Samolet :   protected Air_Transport
{

public:
    Kover_Samolet();

    double metod_finish(const int distance) override;

protected:
    Kover_Samolet(std::string name, int speed);

    double metod_sokrashenia(const int distance);
};

