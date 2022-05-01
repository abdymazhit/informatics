#include <iostream>

using namespace std;

//Предположим, что некоторое число кроликов рассажены в клетках.
//Если число кроликов больше, чем число клеток, то хотя бы в одной из клеток будет больше одного кролика.
//
//В данной задаче мы рассмотрим более общий случай этого классического математического факта.
//Пусть есть n клеток и m зайцев, которых рассадили по этим клеткам.
//Вам требуется расcчитать максимальное количество зайцев, которое гарантированно окажется в одной клетке.
//
//Примеры
//входные данные
//2 3
//выходные данные
//2

int main() {
    int n, m;
    cin >> n >> m;

    int max = m / n;
    if(m % n > 0) {
        max++;
    }
    cout << max;
}