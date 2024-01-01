#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll t;
   cin >> t;
   while(t--){
    ll n,k;
    cin >> n >> k;
    ll pro = 1;
    ll x;

    for(int i=0; i<n; i++){
          cin >> x;
          pro *= x;
    }

    if(2023 % pro == 0){
        cout << "YES" <<endl;
        cout << (2023/pro) << " ";
        for(int i=1; i<k; i++){
            cout<<"1"<<" ";
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
   }
  return 0;
}
