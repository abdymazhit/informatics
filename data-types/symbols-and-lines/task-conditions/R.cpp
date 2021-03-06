#include <iostream>

using namespace std;

//У второклассников очень популярна следующая задача:
//101=1
//8181515=4
//1111112=0
//8888888=14
//1010101=3
//7000007=?
//
//Преподавателю программирования в некоем Центре для одаренных детей так
//понравилась эта задачка, что он решил именно ее использовать для проверки
//знаний математики 2-го класса у своих учеников.
//
//Пусть первое число x, а соответствующее ему n
//
//Входные данные
//Единственное неотрицательное число x, не превышающее 101001.
//
//Выходные данные
//Выведите n.
//
//Примеры
//входные данные
//689
//выходные данные
//4

int main() {
    string x;
    cin >> x;

    int count = 0;
    for(char c : x) {
        if(c == '0' || c == '6' || c == '9') {
            count++;
        } else if(c == '8') {
            count += 2;
        }
    }

    cout << count;
}