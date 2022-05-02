#include <iostream>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

//Даны два списка чисел, которые могут содержать до 10000 чисел каждый.
//Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Примечание. И даже эту задачу на Питоне можно решить в одну строчку.
//
//Входные данные
//Вводятся два списка целых чисел. Все числа каждого списка находятся на отдельной строке.
//
//Выходные данные
//Выведите ответ на задачу.
//
//Примеры
//входные данные
//1 3 2
//4 3 2
//выходные данные
//2 3

bool comp(int a, int b) {
    return a < b;
}

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

    vector<int> nums;
    for(int num : line1Nums) {
        if(line2Nums.contains(num)) {
            nums.emplace_back(num);
        }
    }

    stable_sort(nums.begin(), nums.end(), comp);

    for(int num : nums) {
        cout << num << " ";
    }
}