#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cout << "Введите размеры матрицы." << endl << "Количество строк: ";
    cin >> x;
    cout << "Количество столбцов: ";
    cin >> y;
    
    // Проверка размеров матрицы
    if (x > 5 || y > 5) {
        cout << "Массив не должен превышать размеры 5x5";
        return 1;
    }
    
    int matrix[x][y];
    
    cout << "Введите элементы матрицы." << endl;
    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
            cout << "Элемент " << i+1 << " строки, " << j+1 << " столбца: ";
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
    
    int max = matrix[0][0], min = matrix[0][0], xmin=0, ymin=0, xmax=0, ymax=0;
    
    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
            if (matrix[i][j] > max) {max = matrix[i][j]; xmax = i; ymax = j;}
            if (matrix[i][j] < min) {min = matrix[i][j]; xmin = i; ymin = j;}
        }
    }
    
    matrix[xmax][ymax] = min;
    matrix[xmin][ymin] = max;
    
    // поменялись макс и мин элементы
    cout << endl << "Матрица обновлена:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}