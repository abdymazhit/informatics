#include <iostream>
#include <vector>

using namespace std;

//Однажды, неловкая секретарша перепутала личные дела учащихся.
//Теперь их снова необходимо упорядочить сначала по классам, а внутри класса по фамилиям
//
//Входные данные
//В первой строке дано число N (1 ≤ N ≤ 1000) – количество личных дел.
//Далее для каждого из N учащихся следующие данные (каждое в своей строке):
//фамилия и имя, класс, дата рождения. Фамилия и имя – строки не более чем из 20 символов,
//класс – строка состоящая из числа (от 1 до 11) и латинской буквы (от "A" до "Z" ),
//дата рождения – дата в формате "ДД.ММ.ГГ".
//Гарантируется, что внутри одного класса нет однофамильцев.
//
//Выходные данные
//В выходной файл требуется вывести N строк, в каждой из которых записаны данные по одному учащемуся.
//Строки должны быть упорядочены сначала по классам, а затем по фамилиям.
//
//Примеры
//входные данные
//3
//Sidorov
//Sidor
//9A
//20.07.93
//Petrov
//Petr
//9B
//23.10.92
//Ivanov
//Ivan
//9A
//10.04.93
//
//выходные данные
//9A Ivanov Ivan 10.04.93
//9A Sidorov Sidor 20.07.93
//9B Petrov Petr 23.10.92

class Person {
public:
    string surname, name, schoolClass, birthday;

    Person(string surname, string name, string schoolClass, string birthday) {
        this->surname = surname;
        this->name = name;
        this->schoolClass = schoolClass;
        this->birthday = birthday;
    }
};

// сортировка по классу
bool comp1(Person a, Person b) {
    int sizeA = a.schoolClass.length();
    int sizeB = b.schoolClass.length();

    string aClassNum;
    for(int i = 0; i < sizeA - 1; i++) {
        aClassNum += a.schoolClass[i];
    }

    string bClassNum;
    for(int i = 0; i < sizeB - 1; i++) {
        bClassNum += b.schoolClass[i];
    }

    int aNum = stoi(aClassNum);
    int bNum = stoi(bClassNum);

    if(aNum < bNum) {
        return true;
    } else if(aNum == bNum) {
        if(a.schoolClass[sizeA - 1] < b.schoolClass[sizeB - 1]) {
            return true;
        }
    }

    return false;
}

// сортировка по фамилии
bool comp2(Person a, Person b) {
    if(a.schoolClass == b.schoolClass) {
        if(a.surname < b.surname) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<Person> persons;
    for(int i = 0; i < n; i++) {
        string surname, name, schoolClass, birthday;
        cin >> surname >> name >> schoolClass >> birthday;
        persons.emplace_back(surname, name, schoolClass, birthday);
    }

    stable_sort(persons.begin(), persons.end(), comp1);
    stable_sort(persons.begin(), persons.end(), comp2);

    for(int i = 0; i < n; i++) {
        Person person = persons[i];
        cout << person.schoolClass << " " << person.surname << " " << person.name << " " << person.birthday << endl;
    }
}