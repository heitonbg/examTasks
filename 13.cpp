#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cout << "Введите размеры матрицы." << endl << "Количество строк: ";
    cin >> x;
    cout << "Количество столбцов: ";
    cin >> y;
    
    // создаем матрицу
    int matrix[x][y];
    
    cout << endl << "Введите элементы матрицы." << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Элемент[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << endl << "Матрица: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // считаем сумму чисел в строках
    for (int i = 0; i < x; i++) {
        int sum = 0;
        for (int j = 0; j < y; j++) {
            sum += matrix[i][j];
        }
        cout << "Сумма чисел в " << i+1 << " строке: " << sum << endl;
    }
}