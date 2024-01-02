#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while(t--){

    ll a,b,n;
    cin >> a >> b >> n;
    ll x;
    ll sum = b;
    for(ll i=0; i<n; i++){
      cin >> x;

      sum += min(a-1,x);
    }

    cout << sum << endl;

  }

return 0;
}
