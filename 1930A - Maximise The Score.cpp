 // Namo Buddha //

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll ans = 0;
        vector<ll> v(2*n);

        for(ll i=0; i<2*n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for(ll i=0; i<2*n; i+=2){
            ans += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}
