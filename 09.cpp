#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

bool isParallelogram(Point A1, Point A2, Point A3, Point A4) {
    // проверка равенства координат середин диагоналей
    Point M1 = {(A1.x + A3.x) / 2, (A1.y + A3.y) / 2};
    Point M2 = {(A2.x + A4.x) / 2, (A2.y + A4.y) / 2};
    
    return (M1.x == M2.x && M1.y == M2.y);
}

int main() {
    
    Point A1, A2, A3, A4;
    
    cout << "Введите координаты точки A1 (x1 y1): ";
    cin >> A1.x >> A1.y;
    cout << "Введите координаты точки A2 (x2 y2): ";
    cin >> A2.x >> A2.y;
    cout << "Введите координаты точки A3 (x3 y3): ";
    cin >> A3.x >> A3.y;
    cout << "Введите координаты точки A4 (x4 y4): ";
    cin >> A4.x >> A4.y;

    // проверка
    if (isParallelogram(A1, A2, A3, A4)) {
        cout << "Точки являются вершинами параллелограмма." << endl;
    } else {
        cout << "Точки не являются вершинами параллелограмма." << endl;
    }
}