#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float x,y; 
    
    cout << "Введите x" << endl; 
    cin >> x;

    y = log(abs(cos(x))) / abs(sin(1 + pow(x, 2))); /**pow возводит x в квадрат, складывается x + 2 и вычитается синус, абс возводит в модуль, косинус вычисляется cos x, abs опять возводит в модуль, в конце вычитантся логарифм и делит числитель на знаменатель**/
    cout << "y= " << y << endl; 
    
    return 0;
}
