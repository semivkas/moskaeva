#include <iostream>
#include <cmath> // для abs
using namespace std;

int main() {
    double x, y;
    cin >> x >> y; // ввод координат точки

    double r = x*x + y*y; // считаем x^2 + y^2

    // проверка: внутри круга (радиус 10) и выше графика y = |x|
    if (r < 100 && y > abs(x)) {
        cout << "Да";
    }
    // проверка: точка на границе
    else if (
        (r == 100 && y >= abs(x)) || // на окружности
        (y == abs(x) && r <= 100)    // на линии y = |x|
    ) {
        cout << "На границе";
    }
    // все остальные случаи
    else {
        cout << "Нет";
    }

    return 0;
}