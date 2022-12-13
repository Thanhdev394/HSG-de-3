#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    int n; cin >> n;
    string s; cin >> s;
    int i = 0, j = 0;
    while (i < n) {
        int cnt = 1;
        while (j + 1 < n && s[j] == s[j + 1]) {
            ++cnt;
            ++j;
        }
        cout << s[i] << cnt << endl;
        ++j;
        i = j;
    }
}
