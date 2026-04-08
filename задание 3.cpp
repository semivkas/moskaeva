#include <iostream>   // для вывода
#include <cmath>      // для sqrt и log
using namespace std;

int main() {

    double x, y;

    // задаём диапазон и шаг
    double a = -2;   // начало
    double b = 2;    // конец
    double h = 0.5;  // шаг

    cout << "x\t y" << endl;  // заголовок таблицы

    // цикл по x
    for (x = a; x <= b; x += h) {

        // проверяем область определения

        // 1) подлогарифмическое выражение должно быть > 0
        if (4 - 2 * x <= 0) {
            cout << x << "\t нет значения" << endl;
        }

        // 2) логарифм не должен быть равен 0
        else if (4 - 2 * x == 1) {
            cout << x << "\t нет значения" << endl;
        }

        else {
            // считаем функцию
            y = sqrt(x * x - 2 * x + 7) / log(4 - 2 * x);

            cout << x << "\t " << y << endl;
        }
    }

    return 0;
}