#include <iostream>

using namespace std;

//Дана строка, Вам требуется преобразовать все идущие подряд пробелы в один.
//
//Входные данные
//Длина строки не превосходит 1000.
//
//Выходные данные
//Выведите измененную строку.
//
//Примеры
//входные данные
// nz d urp lren s bwz  boom  t a   j    ho    vi
//выходные данные
// nz d urp lren s bwz boom t a j ho vi
//входные данные
//   d  iz  czl l l h udq t
//выходные данные
// d iz czl l l h udq t

int main() {
    string s;
    getline(cin, s);

    int pos = s.find("  ");
    while(pos + 1) {
        s.replace(pos, 2, " ");
        pos = s.find("  ");
    }

    cout << s;
}