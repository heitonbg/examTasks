#include <iostream>
using namespace std;

int main() {
    int size;

    // если нужно создать массив
    cout << "Введите размер массива: ";
    cin >> size;

    // Проверка на положительность
    if (size <= 0) {
        cout << "Размер массива должен быть положительным!" << endl;
        return 1;
    }

    int arr[size], min;

    // Запрашиваем элементы массива у пользователя
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    min = arr[0];
    
    // Находим минимальный элемент массива
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << "Минимальный элемент: " << min;
    
    return 0;
}