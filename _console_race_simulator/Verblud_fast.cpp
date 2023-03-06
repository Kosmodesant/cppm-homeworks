#include "Verblud_fast.h"
Verblud_fast::Verblud_fast() :Verblud_fast("verblud", 40, 10) {}

int Verblud_fast::metod_finish(const int distance) 
{
    int times = distance / (speed_transport); // чистое время без остановок
    return  times + metod_relax(distance, times);// добавляем время с остановками
}

Verblud_fast::Verblud_fast(const std::string &name,const int speed,const int stamina) :Earth_Transport(name, speed, stamina)
{

}

int Verblud_fast::metod_relax(const int distance,const int times) //метод вычисления общего времени остановок
{
    int time_relax = 0; //общее время отдыха

    int buf = times / stamina_transport; // колличество остановок

    int count = (buf == 0) ? 1 :
        (buf == 1) ? 2 :
        (buf == 2) ? 3 :
        (buf > 2) ? 4 :
        5; // throw

    switch (count)
    {
    case 1: time_relax = 0; // если короткий маршрут и не было отдыха
        break;
    case 2: time_relax = 5; // если отдых был 1 раз (5 у.е)
        break;
    case 3: time_relax = 5 + 6.5; // если отдыха было более 2 раза (5 + 6.5 у.е)
        break;
    case 4: time_relax = (buf - 2) * 8 + 5 + 6.5; // если больше  10000
        //  break;
          //case 5: throw {};
    }
    return time_relax;
}
