#include <iostream>

using namespace std;

bool is_prime(int x) {
    if (x <= 1) {
        return false;
    } else if (x == 2) {
        return true;
    } else if (!(x & 1)) {
        return false;
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, m, i;

    cin >> n >> m;

    for (i = n + 1;; ++i) {
        if (is_prime(i)) {
            break;
        }
    }
    if (i == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}