#include <iostream>
using namespace std;

int main() {
    
    int x, y;

    cout << "Введите размеры матрицы." << endl;
    cout << "Введите количество строк: ";
    cin >> x;
    cout << "Введите количество столбцов: ";
    cin >> y;
    
    if (x > 5 || y > 5) {
        cout << "Матрица не должна превыщать 5 x 5.";
        return 1;
    }
    
    // создаем матрицу
    int matrix[x][y];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Элемент[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // инвертирование элементов матрицы
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][y - 1 - j];
            matrix[i][y - 1 - j] = temp;
        }
    }

    cout << endl << "Инвертированная матрица:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}