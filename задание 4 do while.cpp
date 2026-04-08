#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n = 10;  // начальное значение

    do {

        int a = n / 10;  // десятки
        int b = n % 10;  // единицы

        if (abs(a - b) <= 1) {
            cout << n << " ";
        }

        n++;  // увеличиваем

    } while (n <= 99);

    return 0;
}