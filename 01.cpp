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

    int arr[size], sum=0, product=1;

    // Запрашиваем элементы массива у пользователя
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];

        sum += arr[i];
        product *= arr[i];
    }

    cout << "Сумма элементов: " << sum << endl;
    cout << "Произведение элементов: " << product << endl;

    return 0;
}