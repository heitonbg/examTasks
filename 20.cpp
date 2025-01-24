#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string surname, name, patronymic;
    cout << "Введите ФИО (через пробел): ";
    cin >> surname >> name >> patronymic;

    cout << surname << " " << name[0] << "." << patronymic[0] << ".";
}