#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t; cin >> t;
  while(t--){
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans_a = n*a;
    ll ans_b = 0;
    if(n % 2 == 0){
        ans_b = (n/2)*b;
    }else{
        ans_b = (n/2)*b + a;
    }
    cout << min(ans_a, ans_b) << endl;
  }
return 0;
}
