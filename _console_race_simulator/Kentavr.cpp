#include "Kentavr.h"

Kentavr::Kentavr() :Kentavr("kentavr", 15, 8) {}

Kentavr::Kentavr(std::string name, int speed, int stamina) :Earth_Transport(name, speed, stamina)
{
}

int Kentavr::metod_finish(const int distance)
{
    int times = distance / (speed_transport); // чистое время без остановок
    return  times + metod_relax(distance, times);// добавляем время с остановками
}

int Kentavr::metod_relax(const int distance, const int times)  //метод вычисления общего времени остановок
{
    int time_relax = 0;
    int buf = times / stamina_transport; // колличество остановок
    time_relax = buf * 2;
    return time_relax;
}
