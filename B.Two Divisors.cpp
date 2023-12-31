#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    
    while(b!=0){

     ll tem = b;
     b = a % b;
     a = tem;
    }
    return a;
}
ll lcm(ll a, ll b){
    ll absA = abs(a);
    ll absB = abs(b);

    return (a*b)/gcd(absA, absB);
}

int main()
{
   ll t;
   cin >> t;
   while(t--){
    ll a,b;
    cin >> a >> b;

    ll res = lcm(a,b);

    if(b == res){
        cout<< (res*b)/a <<endl;
    }
    else{
        cout << res << endl;
    }
   }
 
return 0;
}
