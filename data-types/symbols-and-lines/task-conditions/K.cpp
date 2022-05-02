#include <iostream>
#include <sstream>

using namespace std;

//Дана строка, состоящая из строчных латинских букв и пробелов.
//Проверьте, является ли она палиндромом без учета пробелов (например, "аргентина манит негра").
//
//Входные данные
//На вход подается 1 строка длины не более 100, содержащая пробелы. Подряд может идти произвольное число пробелов.
//
//Выходные данные
//Необходимо вывести yes, если данная строка является палиндромом, и no в противном случае.
//
//Примеры
//входные данные
//ab a
//выходные данные
//yes

int main() {
    string s;
    getline(cin, s);

    string word;
    stringstream ss(s);
    s = "";
    while(ss >> word) {
        s += word;
    }

    string s1;
    for(int i = 0; i < s.length() / 2; i++) {
        s1 += s[i];
    }

    string s2;
    if(s.length() % 2 == 0) {
        for(int i = s.length() - 1; i >= s.length() / 2; i--) {
            s2 += s[i];
        }
    } else {
        for(int i = s.length() - 1; i >= s.length() / 2 + 1; i--) {
            s2 += s[i];
        }
    }

    if(s1 == s2) {
        cout << "yes";
    } else {
        cout << "no";
    }
}