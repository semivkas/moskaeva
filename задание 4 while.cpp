#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n = 10;  // начинаем с 10

    while (n <= 99) {

        int a = n / 10;  // десятки
        int b = n % 10;  // единицы

        if (abs(a - b) <= 1) {
            cout << n << " ";
        }

        n++;  // увеличиваем число
    }

    return 0;
}