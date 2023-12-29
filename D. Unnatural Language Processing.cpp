#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isVowl(char ch){
    return ch == 'a' || ch == 'e';
}

int main()
{
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string x ="";

    for(ll i = n-1; i >0; i--){
        if(isVowl(s[i]) && !isVowl(s[i-1])){
            x += s[i];
            x += s[i-1];
            x += '.';
            i--;
        }else{
            x += s[i];
        }
    }
    x.pop_back();

  reverse(x.begin(), x.end());
  cout << x << endl;

  }

 return 0;
}
