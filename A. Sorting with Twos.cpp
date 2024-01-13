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

    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    bool check = false;

    for(ll i=0; i<n-1; i++){
        if(v[i+1] < v[i]){

            if(((i+1) & i) != 0){
                check = true;
            }
        }
       
    }
    if(check){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
   
    
   }
}
