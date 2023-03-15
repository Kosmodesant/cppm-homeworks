//⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⡀⢀⣀⣤⣤⣤⣄⡤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠈⣯⢉⣿⣿⡟⢸⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡎⣿⣿⡇⢸⢿⡿⣣⣄⠀⠀⠀⣱⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠀⡸⣷⡿⡛⣅⣸⣷⣷⣿⣿⣿⣿⡿⠏⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣶⣾⠀⠈⢻⣄⡀⠈⢿⡅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⣧⣄⣠⣿⣿⣷⡿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
//⠀⠀       ТЯГИ ЛЮТЫЕ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀


#include "Bot_skorohod.h"

Bot_skorohod::Bot_skorohod() :Bot_skorohod("bot_skorohod", 6, 60) {}

Bot_skorohod::Bot_skorohod(const std::string& name, const int speed, const int stamina) :Earth_Transport(name, speed, stamina)
{

}

int Bot_skorohod::metod_finish(const int distance) 
{
    int times = distance / (speed_transport); // чистое время без остановок
    return  times + metod_relax(distance, times);// добавляем время с остановками
}

int Bot_skorohod::metod_relax(const int distance, const int times) //метод вычисления общего времени остановок
{
    int time_relax = 0;
    int buf = times / stamina_transport; // колличество остановок
    int count = (buf == 0) ? 1 :
        (buf < 0 && buf <= 1) ? 2 :
        (buf >= 2) ? 3 :
        (distance >= 10000) ? 4 : 5; // throw
    switch (count)
    {
    case 1: time_relax = 0; // если короткий маршрут и не было отдыха
        break;
    case 2: time_relax = 10; // если отдых был 1 раз (10 у.е)
        break;
    case 3: time_relax = (buf - 1) * 5 + 10; // если отдыха было более 1 раза 
        break;
    }
    return time_relax;
}