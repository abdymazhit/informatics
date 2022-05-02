#include <iostream>

using namespace std;

//Дана строка S, в которой выделили подстроку, состоящую из символов с i-го по j-й включительно
//(символы строки S нумеруются с единицы) и поменяли местами i-й символ с j-м, (i+1)-й с (j-1)-м и
//так далее (конвертировали подстроку). Выведите строку S после внесенных изменений.
//
//Входные данные
//В первой строке входного файла содержится строка S, длиной не более 1000 символов, во второй – числа i и j (i ≤ j).
//
//Выходные данные
//В выходной файл выведите ответ на задачу.
//
//Примеры
//входные данные
//vjhoamkts
//7 8
//выходные данные
//vjhoamtks
//входные данные
//qwkvjqrealvrbgiyn
//10 10
//выходные данные
//qwkvjqrealvrbgiyn
//входные данные
//yfvblenhrwubmvwtltypfcrnbohoesdpbdbxsfyiislufdfglbsxerhrazoigehmtjshvtkzhsheqbduyrrccvhtfnoinatybrsyxhcuzmfgahcgeveqsmuvzzpcmcsdukkksoqxcrhmqklpykgrdqgruixoqbdlkkwdinxclxptpphyxrklatmqjlxzjgvgdarmjnbwcwihbxrrhovxjmqspfbcawmfxbapvzsfifs
//175 182
//выходные данные
//yfvblenhrwubmvwtltypfcrnbohoesdpbdbxsfyiislufdfglbsxerhrazoigehmtjshvtkzhsheqbduyrrccvhtfnoinatybrsyxhcuzmfgahcgeveqsmuvzzpcmcsdukkksoqxcrhmqklpykgrdqgruixoqbdlkkwdinxclxptpptalkrxyhmqjlxzjgvgdarmjnbwcwihbxrrhovxjmqspfbcawmfxbapvzsfifs

int main() {
    string s;
    int i, j;
    cin >> s >> i >> j;

    for(int k = 0; k < i - 1; k++) {
        cout << s[k];
    }
    for(int k = j- 1; k >= i - 1; k--) {
        cout << s[k];
    }
    for(int k = j; k < s.length(); k++) {
        cout << s[k];
    }
}