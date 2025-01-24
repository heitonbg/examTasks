#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a, b, c, p, S;
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;
    
    if (a+b>c && a+c>b && b+c>a) {
        p = (a + b + c) / 2.0;  // полупериметр 
        S = sqrt(p * (p - a) * (p - b) * (p - c));  // площадь по формуле Герона
        cout << "Площадь треугольника: " << S;
    }
    else {
        cout << "Эти числа не могут быть длинами сторон треугольника.";
    }
}