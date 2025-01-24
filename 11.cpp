#include <iostream>
using namespace std;

int main() {
    
    int n;

    cout << "Введите размер матрицы n x n: ";
    cin >> n;
    
    if (n > 5) {
        cout << "Максимальный размер матрицы: 5 x 5.";
        return 1;
    }

    // создаем матрицу
    int matrix[n][n];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Элемент[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // ввод нового значения для диагонали
    int value;
    cout << "Введите значение для замены на главной диагонали: ";
    cin >> value;

    // замена элементов на главной диагонали
    for (int i = 0; i < n; i++) {
        matrix[i][i] = value;
    }

    // вывод изменённой матрицы
    cout << "Изменённая матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}