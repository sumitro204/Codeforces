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
   string s1,s2;
   cin >> s1 >> s2;
   
   ll one_1 = 0, one_2 = 0, cnt=0;
   for(ll i=0; i<n; i++){
    if(s1[i] == '1'){
        one_1++;
    }if(s2[i] == '1'){
        one_2++;
    }if(s2[i] != s1[i] && s2[i] == '1'){
      cnt++;
    }
   }

   ll ans = cnt;
   if(one_1 > one_2){
    ans += (one_1 - one_2);
   }
  cout << ans << endl;
  }

  return 0;
}
