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

    int arr[size], max;

    // Запрашиваем элементы массива у пользователя
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    max = arr[0];
    
    // Находим максимальный элемент массива
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Максимальный элемент: " << max;
    
    return 0;
}