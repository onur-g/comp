#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int len = size(s);

    int lower_count = 0;

    for (int i = 0; i < len; ++i) {
        if (islower(s[i])) {
            ++lower_count;
        }
    }

    int upper_count = len - lower_count;

    if (upper_count > lower_count) {
        for (int i = 0; i < len; ++i) {
            if (islower(s[i])) {
                s[i] -= 32;
            }
        }
    } else {
        for (int i = 0; i < len; ++i) {
            if (!islower(s[i])) {
                s[i] += 32;
            }
        }
    }

    cout << s << endl;
}