#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;

    string s; cin >> s;
    ll deletion = 0;

    for(ll i=0; i<n-2; i++){
     if((s[i] =='p' && s[i+1] =='i' && s[i+2] =='e') ||
         s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
            deletion++;
            i+=2;
         }
    }
    cout << deletion <<endl;
  }
}
