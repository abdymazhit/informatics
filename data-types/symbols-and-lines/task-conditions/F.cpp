#include <iostream>
#include <sstream>

using namespace std;

//Дана строка, содержащая пробелы. Найдите в ней самое длинное слово, выведите  это слово и его длину. Если таких слов несколько, выведите первое из них.
//
//Входные данные
//Задана одна строка, содержащая пробелы. Слова разделены ровно одним пробелом. Пробелы в начале и конце строки допускаются.
//
//Выходные данные
//Необходимо вывести самое длинное слово в строке и его длину.
//
//Примеры
//входные данные
//one two three four five six
//выходные данные
//three
//5

int main() {
    string line;
    getline(cin, line);

    string word;
    stringstream ss(line);

    int max = 0;
    string s;
    while(ss >> word) {
        if(word.length() > max) {
            max = word.length();
            s = word;
        }
    }

    cout << s << endl << max;
}