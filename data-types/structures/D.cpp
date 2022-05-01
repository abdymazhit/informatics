#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Создайте структуру Point и сохраните исходные данные в массиве структур Point.
//
//Входные данные
//Программа получает на вход набор точек на плоскости. Сначала задано количество точек n,
//затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки.
//Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.
//
//Выходные данные
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//Программа выводит только координаты точек, их количество выводить не надо.
//
//Примеры
//входные данные
//2
//1 2
//2 3
//
//выходные данные
//1 2
//2 3

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

    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            Point point1 = points[j];
            Point point2 = points[j - 1];

            double d1 = sqrt(pow(point1.x, 2) + pow(point1.y, 2));
            double d2 = sqrt(pow(point2.x, 2) + pow(point2.y, 2));
            if(d1 < d2) {
                swap(points[j], points[j - 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        Point point = points[i];
        cout << point.x << " " << point.y << endl;
    }
}