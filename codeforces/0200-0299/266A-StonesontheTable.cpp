#include <iostream>
#define ll long long
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == s[i]) {
            ++cnt;
        }
    }
    cout << cnt << endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}