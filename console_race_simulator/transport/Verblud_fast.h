#pragma once
#include "Earth_Transport.h"

class Verblud_fast : protected Earth_Transport
{
public:
    Verblud_fast();
    double metod_finish1(const int distance) override;

protected:
    Verblud_fast(const std::string &name,const int speed,const int stamina);
    float metod_relax(const int distance, const int times); //метод вычисления общего времени остановок
};

