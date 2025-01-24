#include <iostream>
using namespace std;

int main() {
    
    int year;
    cout << "Введите год: ";
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Год является високосным.";
    }
    else {
        cout << "Год не является високосным.";
    }
}