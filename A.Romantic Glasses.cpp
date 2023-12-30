
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
    vector<long long>v(n);
    for(ll i=0; i<n; i++){
       cin >> v[i]; 
    }
    ll even = 0, odd = 0;
    map<ll,ll> mp;
    bool check = false;

    for(ll i=0; i<n; i++){
        if(i%2 == 0){
            even += v[i];
        }
        else{
            odd += v[i];
        }
       ll diff = even - odd;

       if(even == odd){
        cout << "YES" << endl;
        check = true;
        break;
       }
       if(mp.find(diff) != mp.end()){
        cout << "YES" <<endl;
        check = true;
        break;
       }
       else{
        mp.insert({diff,1});
       }
    }
    if(!check){
        cout << "NO" <<endl;
    }


  }
 
  return 0;
}
