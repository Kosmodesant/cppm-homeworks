#pragma once
#include "Earth_Transport.h"
class Kentavr : protected Earth_Transport
{
public:
    Kentavr();

    int metod_finish(const int distance) override;
protected:
    Kentavr(std::string name, int speed, int stamina);
    int metod_relax(const int distance, const int times);  //метод вычисления общего времени остановок 
};

