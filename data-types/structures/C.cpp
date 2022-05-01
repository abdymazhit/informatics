#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

//Выведите диаметр данного множества – максимальное расстояние между любыми двумя точками.
//
//Создайте структуру Point и сохраните исходные данные в массиве структур Point.
//
//Входные данные
//Программа получает на вход набор точек на плоскости. Сначала задано количество точек n,
//затем идет последовательность из n строк, каждая из которых содержит два числа:
//координаты точки. Величина n не превосходит 100000, все исходные координаты – целые числа, не превосходящие 103.
//
//Выходные данные
//Необходимо вывести диаметр данного множества с точностью в 15 значащих цифр.
//
//Примеры
//входные данные
//2
//1 2
//2 3
//
//выходные данные
//1.4142135623731

class Point {
public:
    int x, y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Point> points;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y);
    }

    double maxD = 0;
    for(int i = 0; i < n; i++) {
        Point A = points[i];

        for(int j = i + 1; j < n; j++) {
            Point B = points[j];

            double D = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
            if(D > maxD) {
                maxD = D;
            }
        }
    }

    cout << scientific << setprecision(14) << maxD;
}