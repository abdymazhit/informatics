#include <iostream>
#include <vector>

using namespace std;

//Выведите фамилии и имена учащихся, не имеющих троек (а также двоек и колов).
//
//Входные данные
//Заданы сначала количество учащихся n, затем n строк,
//каждая из которых содержит фамилию, имя и три числа
//(оценки по трем предметам: математике, физике, информатике).
//Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.
//
//Выходные данные
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
//Выводить оценки не нужно. Порядок вывода должен быть таким же, как в исходных данных.
//
//Примеры
//входные данные
//3
//Babat Anna 5 4 3
//Belova Galina 4 3 5
//Moroz Yaroslav 3 5 4
//выходные данные

class Person {
public:
    string surname, name;

    Person(string surname, string name) {
        this->surname = surname;
        this->name = name;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Person> persons;

    for(int i = 0; i < n; i++) {
        string surname, name;
        cin >> surname >> name;

        int maths, physics, informatics;
        cin >> maths >> physics >> informatics;

        if(maths > 3 && physics > 3 && informatics > 3) {
            persons.emplace_back(surname, name);
        }
    }

    for(Person person : persons) {
        cout << person.surname << " " << person.name << endl;
    }
}