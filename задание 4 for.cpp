#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // цикл от 10 до 99
    for (int n = 10; n <= 99; n++) {

        int a = n / 10;  // десятки
        int b = n % 10;  // единицы

        // проверка условия
        if (abs(a - b) <= 1) {
            cout << n << " ";  // вывод
        }
    }

    return 0;
}