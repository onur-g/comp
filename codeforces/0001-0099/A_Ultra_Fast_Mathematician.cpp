#include <iostream>

using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    int len = x.length();

    for (int i = 0; i < len; i++) {
        if (x[i] == y[i]) {
            x[i] = '0';
        } else {
            x[i] = '1';
        }
    }

    cout << x << endl;
    return 0;
}