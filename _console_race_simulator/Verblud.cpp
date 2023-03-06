#include "Verblud.h"

Verblud::Verblud() :Verblud("verblud", 10, 30) {}

int Verblud::metod_finish(const int distance) 
{
    int times = distance / (speed_transport); // чистое время без остановок
    return  times + metod_relax(distance, times);// добавляем время с остановками
}

Verblud::Verblud(std::string name, int speed, int stamina) :Earth_Transport(name, speed, stamina)
{
}

int Verblud::metod_relax(const int distance, const int times) //метод вычисления общего времени остановок
{
    int time_relax = 0;
    int buf = times / stamina_transport; // колличество остановок
    int count = (buf == 0) ? 1 :
        (buf < 0 && buf <= 1) ? 2 :
        (buf >= 2) ? 3 :
        (distance >= 10000) ? 4 :
        5;
    switch (count)
    {
    case 1: time_relax = 0; // если короткий маршрут и не было отдыха
        break;
    case 2: time_relax = 5; // если отдых был 1 раз (5 у.е)
        break;
    case 3: time_relax = (buf - 1) * 8 + 5; // если отдыха было более 1 раза (8 у.е)
        break;
        // case 4: time_relax = 0.95; // если больше  10000
           //  break;
             //case 5: throw {};
    }
    return time_relax;
}
