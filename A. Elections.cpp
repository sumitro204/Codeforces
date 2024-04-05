#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

       ll A = max(0LL, (max(b,c) - a + 1));
       ll B = max(0LL, (max(c,a) - b + 1));
       ll C = max(0LL, (max(a,b) - c + 1));

        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}
