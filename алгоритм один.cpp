#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    float x,y; 
    
    cout << "Введите x" << endl; 
    cin >> x;

    y = log(abs(cos(x))) / abs(sin(1 + pow(x, 2)));
    cout << "y= " << y << endl; 
    
    return 0;
}
