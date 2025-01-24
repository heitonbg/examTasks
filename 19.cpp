#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string message;
    cout << "Введите текст телеграммы на ENG: ";
    getline(cin, message);
    
    cout << "Стоимость телеграммы: " << message.size()<< " руб.";
}