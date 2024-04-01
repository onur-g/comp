#include <iostream>

using namespace std;

int main() {
    int y, beau = 0;

    cin >> y;

    int a, b, c, d;
    while (!beau) {
        ++y;
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
        beau = a != b && a != c && a != d && b != c && b != d && c != d;
    }

    cout << y << endl;
    return 0;
}