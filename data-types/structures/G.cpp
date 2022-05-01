#include <iostream>

using namespace std;

//Определите средний балл всех учащихся по каждому предмету.
//
//Входные данные
//Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию,
//имя и три числа (оценки по трем предметам: математике, физике, информатике).
//Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
//
//Выходные данные
//Выведите три действительных числа: средний балл всех учащихся по математике, по физике, по информатике.
//
//Примеры
//входные данные
//2
//Markov Valeriy 4 5 2
//Kozlov Georgiy 5 1 2
//выходные данные
//4.5 3 2

int main() {
    int n;
    cin >> n;

    int sumMaths = 0, sumPhysics = 0, sumInformatics = 0;
    for(int i = 0; i < n; i++) {
        string surname, name;
        cin >> surname >> name;

        int maths, physics, informatics;
        cin >> maths >> physics >> informatics;

        sumMaths += maths;
        sumPhysics += physics;
        sumInformatics += informatics;
    }

    cout << (double) sumMaths / n << " " << (double) sumPhysics / n << " " << (double) sumInformatics / n;
}