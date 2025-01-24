#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int number, count=0;
    cout << "Введите число: ";
    cin >> number;
    
    for (int i = 1; i <= abs(number); i++) {
        if (number % i == 0) {
            count += 1;
        }
    }
    
    if (count == 2) {
        cout << "Число является простым.";
    }
    else {
        cout << "Число не является простым.";
    }
}
