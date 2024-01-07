#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while(t--){
   ll n;
   cin >> n;
   vector<ll>v(n);

   for(ll i=0; i<n; i++){
       cin >> v[i];
   }
   ll s = 1e10, t = 1e10;

   ll ans = 0;

   for(ll i=0; i<n; i++){
    if(s>t){
        swap(s,t);
    } 
    if(v[i] <= s){
        s = v[i];
    }
     else if(v[i] <= t){
        t = v[i];
    }
    else{
        s = v[i];
        ans++;
    }
   }

   cout << ans << endl;
  }


  return 0;
}
