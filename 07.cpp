#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cout  << "Введите количество строк: ";
    cin >> x;
    cout << "Введите количество столбцов: ";
    cin >> y;
    
    // создаем матрицу
    int matrix[x][y];
    
    cout << "Введите элементы матрицы." << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Матрица:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // создаем новую матрицу для поворота
    int newmatrix[y][x];
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            newmatrix[j][x-1-i] = matrix[i][j];
        }
    }

    cout << "Матрица после поворота на 90 градусов по часовой стрелке:" << endl;
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << newmatrix[i][j] << "\t";
        }
        cout << endl;
    }
}