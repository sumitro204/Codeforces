
// This solution approch is to find the maximun GCD of n between x subsets of n //

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while(t--){
    ll n, x;
    cin >> n >> x;
    ll ans  = 1;

    for(ll i=1; i*i<=n; i++){
        if(n%i == 0){
            if(n/i >= x){
                ans = max(ans, i);
            }if(i >= x){
                ans = max(ans, n/i);
            }
        }
    }
    cout << ans << endl;
  }
return 0;
}
