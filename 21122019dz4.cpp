Задание № 4
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    cout << "Задание 4.\n";
    cout << "\n";
    cout << "Пользователь указывает цену одной минуты исходящего звонка с одного мобильного\n";
    cout << "оператора другому, а также продолжительность разговора в минутах и секундах. Необходимо\n";
    cout << "вычислить денежную сумму на которую был произведен звонок.\n";
    cout << "\n";
    cout << "Решение для задания № 4:\n";
    cout << "\n";
    double price_min, price_sec, time, time_sec, price_all;
    int kop;
    cout << "Введите цену минуты исходящего звонка другому оператору : ";
    cin >> price_min; //0.29
    cout << "Введите продолжительность разговора в минутах и секундах : ";
    cin >> time; //3.11
    time_sec = int(time) * 60 + (time * 100 - int(time) * 100);
    price_sec = price_min / 60;
    price_all = time_sec * price_sec;
    kop = (price_all - int(price_all)) * 100;
    cout << "Стоимость звонка составила: " << int(price_all) << " грн. " << kop << " коп." << endl; // 0.928167 грн.
}
