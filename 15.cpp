#include <iostream>
using namespace std;

int main() {
    
    int dimension;
    cout << "Введите размер квадратной матрицы: ";
    cin >> dimension;
    
    if (dimension > 5) {
        cout << "Матрица не должна превыщать 5 x 5.";
        return 1;
    }
    
    // создаем матрицу
    int matrix[dimension][dimension];
    
    cout << endl << "Введите элементы матрицы." << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << "Элемент[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << endl << "Матрица: " << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // сумма чисел на главной и побочной диагоналях
    int sumMain = 0, sumSecondary = 0;
    
    for (int i = 0; i < dimension; i++) {
        sumMain += matrix[i][i];
        sumSecondary += matrix[i][dimension-1-i];
    }
    
    cout << "Сумма чисел на главной диагонали: " << sumMain << endl;
    cout << "Сумма чисел на побочной диагонали: " << sumSecondary;
}