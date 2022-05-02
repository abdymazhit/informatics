#include <iostream>
#include <set>
#include <vector>
#include <sstream>

using namespace std;

//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте,
//сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Примечание. Эту задачу на Питоне можно решить в одну строчку.
//
//Входные данные
//Вводятся два списка чисел. Все числа каждого списка находятся на отдельной строке.
//
//Выходные данные
//Выведите ответ на задачу.
//
//Примеры
//входные данные
//1 3 2
//4 3 2
//выходные данные
//2

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    set<int> line1Nums;
    set<int> line2Nums;

    string word;

    stringstream ss1(line1);
    while(ss1 >> word) {
        int num = stoi(word);
        line1Nums.insert(num);
    }

    stringstream ss2(line2);
    while(ss2 >> word) {
        int num = stoi(word);
        line2Nums.insert(num);
    }

    int count = 0;
    for(int num : line1Nums) {
        if(line2Nums.contains(num)) {
            count++;
        }
    }

    cout << count;
}