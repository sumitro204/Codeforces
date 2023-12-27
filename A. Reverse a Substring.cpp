#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n;
   cin >> n;
   string s;
   cin >> s;

   bool flag = false;

   for(ll i=1; i<s.size(); i++){
    if(s[i] < s[i-1]){
        cout << "YES" <<endl;
        cout <<i << " "<< i+1 <<endl;
       return 0;
    }
   }
    cout << "NO" << endl;
   
  return 0;
}
