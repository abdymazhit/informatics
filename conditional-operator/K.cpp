#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2 + 2 && (y1 == y2 + 1 || y1 == y2 - 1) ||
        x1 == x2 - 2 && (y1 == y2 + 1 || y1 == y2 - 1) ||
        y1 == y2 + 2 && (x1 == x2 + 1 || x1 == x2 - 1) ||
        y1 == y2 - 2 && (x1 == x2 + 1 || x1 == x2 - 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}