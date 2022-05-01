#include <iostream>
#include <vector>

using namespace std;

//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию,
//имя и три числа (оценки по трем предметам: математике, физике, информатике).
//Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
//
//Общее число учащихся не превосходит 100001.
//Выходные данные
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
//Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы,
//то их нужно выводить в порядке, заданном во входных данных.
//
//Примеры
//входные данные
//2
//Markov Valeriy 1 1 1
//Ivanov Ivan 2 2 2
//выходные данные
//Ivanov Ivan
//Markov Valeriy
//входные данные
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//выходные данные
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

class Person {
public:
    string surname, name;
    double gpa;

    Person(string surname, string name, int maths, int physics, int informatics) {
        this->surname = surname;
        this->name = name;
        gpa = (maths + physics + informatics) / 3.0;
    }
};

// сортировка по gpa
bool comp(Person a, Person b) {
    return a.gpa > b.gpa;
}

int main() {
    int n;
    cin >> n;

    vector<Person> persons;
    for(int i = 0; i < n; i++) {
        string surname, name;
        int maths, physics, informatics;

        cin >> surname >> name;
        cin >> maths >> physics >> informatics;

        persons.emplace_back(surname, name, maths, physics, informatics);
    }

    stable_sort(persons.begin(), persons.end(), comp);

    for(int i = 0; i < n; i++) {
        cout << persons[i].surname << " " << persons[i].name << endl;
    }
}