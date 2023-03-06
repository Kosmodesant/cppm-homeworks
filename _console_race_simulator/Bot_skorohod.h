#pragma once
#include "Earth_Transport.h"
class Bot_skorohod :    protected Earth_Transport
{
public:

    Bot_skorohod();

    int metod_finish(const int distance) override;

protected:

    Bot_skorohod(const std::string &name, const int speed,const int stamina) ;

    int metod_relax(const int distance,const int times); //метод вычисления общего времени остановок
};