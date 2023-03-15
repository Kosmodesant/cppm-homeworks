#pragma once
#include "Earth_Transport.h"

class Verblud: protected Earth_Transport
{
public:
    Verblud();
    int metod_finish(const int distance) override;
                    
protected:
    Verblud(std::string name, int speed, int stamina);
    int metod_relax(const int distance, const int times); //метод вычисления общего времени остановок
};

