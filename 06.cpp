#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cout << "Введите размеры матрицы (максимум 5x5)." << endl << "Количество строк: ";
    cin >> x;
    cout << "Количество столбцов: ";
    cin >> y;
    
    // создаем матрицу
    int matrix[x][y];
    
    cout << endl << "Введите элементы матрицы.";
    for (int i=0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "Элемент " << i+1 << " строки, " << j+1 << " столбца: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << endl << "Матрица:" << endl;
    for (int i=0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // транспонируем матрицу
    int transp[y][x];

    for (int i=0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            transp[i][j] = matrix[j][i];
        }
    }
    
    cout << endl << "Транспонированная матрица:" << endl;
    for (int i=0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << transp[i][j] << "\t";
        }
        cout << endl;
    }
}