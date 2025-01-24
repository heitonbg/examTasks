#include <iostream>
using namespace std;

int main() {
    
    int x, y;
    cout << "Введите размеры матрицы." << endl << "Количество строк: ";//x и y - строки и столбцы
    cin >> x;
    cout << "Количество столбцов: ";
    cin >> y;
    
    if (x > 5 || y > 5) {
        cout << "Матрица не должна превыщать 5 x 5.";
        return 1;
    }
    
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
    
    // среднее значение чисел в каждом столбце
    for (int i = 0; i < y; i++) {
        double sum = 0;
        for (int j = 0; j < x; j++) {
            sum += matrix[j][i];
        }
        cout << "Среднее значение в " << i+1 << " столбце: " << sum / x << endl;
    }
}