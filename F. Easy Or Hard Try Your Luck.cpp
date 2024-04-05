#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                cnt++;
                while (i < n && s1[i] != s2[i]) {
                    i++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
