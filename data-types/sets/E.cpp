#include <iostream>
#include <set>

using namespace std;

//Во входной строке записана последовательность чисел через пробел. Для каждого числа выведите слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//Вводится список чисел. Все числа списка находятся на одной строке.
//
//Выходные данные
//Выведите ответ на задачу.
//
//Примеры
//входные данные
//1 2 3 2 3 4
//выходные данные
//NO
//NO
//NO
//YES
//YES
//NO

int main() {
    set<int> nums;

    int num;
    while(cin >> num) {
        if(nums.contains(num)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        nums.insert(num);
    }
}