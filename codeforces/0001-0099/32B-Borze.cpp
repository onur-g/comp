#include <iostream>
#include <string>

using namespace std;

#define MAX 200

int main() {
    string s, ret;
    cin >> s;

    int len = s.size();

    for (int i = 0; i < len; ++i) {
        if (s[i] == '.') {
            ret += '0';
        } else if (s[i] == '-') {
            if (s[i + 1] == '.') {
                ret += '1';
            } else {
                ret += '2';
            }
            ++i;
        }
    }

    cout << ret;
    return 0;
}