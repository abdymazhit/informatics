#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

//Среди исходных точек найдите три, образующие треугольник с максимальным периметром. Выведите данный периметр.
//
//Входные данные
//Программа получает на вход набор точек на плоскости. Сначала задано количество точек n (2<n<101),
//затем идет последовательность из n строк, каждая из которых содержит два числа:
//координаты точки. Все исходные координаты – целые числа, не превосходящие 103.
//
//Выходные данные
//Необходимо вывести найденный периметр с точностью в 15 значащих цифр.
//
//Примеры
//входные данные
//4
//0 0
//0 1
//1 0
//1 1
//
//выходные данные
//3.41421356237309

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

    double maxP = 0;
    for(int i = 0; i < n; i++) {
        Point A = points[i];

        for(int j = i + 1; j < n; j++) {
            Point B = points[j];

            for(int k = j + 1; k < n; k++) {
                Point C = points[k];

                double AB = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
                double BC = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
                double CA = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));

                double P = AB + BC + CA;
                if(P > maxP) {
                    maxP = P;
                }
            }
        }
    }

    cout << scientific << setprecision(14) << maxP;
}