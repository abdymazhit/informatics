#include <iostream>

using namespace std;

//Даны значения двух моментов времени, принадлежащих одним и тем же суткам:
//часы, потом минуты и секунды для каждого из моментов времени.
//Известно, что второй момент времени наступил не раньше первого.
//Определите, сколько секунд прошло между двумя моментами времени.
//
//Входные данные
//В первой строке входных данных находятся три целых числа — часы,
//минуты и секунды первого момента времени.
//Во второй строке — три числа, характеризующие второй момент времени.
//Число часов лежит в диапазоне от 0 до 23, число минут и секунд — от 0 до 59.
//
//Выходные данные
//Выведите число секунд между двумя моментами времени.
//
//Примеры
//входные данные
//1 1 1
//2 2 2
//выходные данные
//3661
//входные данные
//1 2 30
//1 3 20
//выходные данные
//50

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    int sum1 = h1 * 3600 + m1 * 60 + s1;
    int sum2 = h2 * 3600 + m2 * 60 + s2;

    int sum = sum2 - sum1;
    cout << sum;
}