#include <iostream>
using namespace std;

int main() {
    
    int n;

    cout << "Введите количество элементов: ";
    cin >> n;

    int arr[n];
    
    cout << "Введите элементы массива." << endl;
    for (int i = 0; i < n; i++) {
        cout << "Элемент " << i+1 << ": ";
        cin >> arr[i];
    }

    // Сортировка методом пузырька
    for (int i = 0; i < n - 1; i++) {
        // проход по массиву
        for (int j = 0; j < n - 1 - i; j++) {
            // сравнение соседних элементов
            if (arr[j] > arr[j + 1]) {
                // меняем местами, если в неправильном порядке
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}