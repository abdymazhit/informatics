#include <iostream>
#include <vector>

using namespace std;

//Определите учащихся с наилучшей успеваемостью, то есть с максимальным средним баллом по трем предметам.
//Выведите всех учащихся, имеющих максимальный средний балл.
//
//Входные данные
//Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию,
//имя и три числа (оценки по трем предметам: математике, физике, информатике).
//Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
//
//Выходные данные
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
//Выводить оценки не нужно. Порядок вывода должен быть таким же, как в исходных данных.
//
//Примеры
//входные данные
//2
//Markov Valeriy 1 1 1
//Sergey Petrov 5 5 5
//выходные данные
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

    double max = 0;
    for(int i = 0; i < n; i++) {
        if(persons[i].gpa > max) {
            max = persons[i].gpa;
        }
    }

    for(int i = 0; i < n; i++) {
        Person person = persons[i];
        if(person.gpa == max) {
            cout << person.surname << " " << person.name << endl;
        }
    }
}