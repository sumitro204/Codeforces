#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{ 
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> vec(n);
  
        for(ll i=0; i<n; i++){
            cin >> vec[i];
        }

        ll current = 0;
        bool check = true;
        for(ll i=0; i<n; i++){
            if(vec[i] < current){
                check = false;
                break;
            } else{
                ll x = vec[i] / 10;
                ll y = vec[i] % 10;

                if(x >= current){
                   if(y >= x){
                    current = y;
                   }else{
                    current = vec[i];
                   }
                }else{
                    current = vec[i];
                }
            }
        }
        if(check){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
 
return 0;
}
