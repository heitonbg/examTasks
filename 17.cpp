#include <iostream>
using namespace std;

int main() {
    
    int level, apartmentNumber;
    cout << "Введите количество этажей в небоскрёбе: ";
    cin >> level;
    cout << "Введите номер квартиры: ";
    cin >> apartmentNumber;

    // проверка на допустимость номера квартиры
    if (apartmentNumber < 1 || apartmentNumber > 3 * level) {
        cout << "Неверный номер квартиры!" << endl;
        return 1;
    }

    // Определяем номер обычного этажа, на котором находится квартира
    int numFloor = (apartmentNumber - 1) / 3 + 1;

    if (numFloor % 2 == 0) {
        cout << "Лифт должен остановиться на " << (numFloor -= 1) << " этаже.";
    }
    else {
        cout << "Лифт должен остановиться на " << numFloor << " этаже.";
    }
}