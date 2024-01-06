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
    string s;
    cin >> s;
    ll ans = 0;

    for(ll i=0; i<n; i++){
        if(s[i] == '+'){
            ans += 1;
        }else{
            ans += (-1);
        }
    }
    cout<< abs(ans) <<endl;
  }

return 0;
}
