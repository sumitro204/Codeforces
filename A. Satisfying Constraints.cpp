#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        ll maxi_1 = 0;
        ll mini_2 = 1e9;
        ll last = 0;

        vector<ll> vec_3;

        for(ll i=0; i<n; i++){
            ll x, y;
            cin >> x >> y;

            if(x == 1){
              maxi_1 = max(maxi_1, y);
            }else if(x == 2){
                mini_2 = min(mini_2, y);
            }else if(x == 3){
                vec_3.push_back(y);
            }
        }

        ll ans = mini_2 - maxi_1 + 1; 

        for(ll i=0; i<vec_3.size(); i++){
            if(vec_3[i] <= mini_2 && vec_3[i] >= maxi_1){
                last++;
            }
        }
       cout << max(ans - last, 0LL) << endl;
    }
    return 0;
}
