#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{ 
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;

        vector<ll>vec1(n);
        for(ll i=0; i<n; i++){
            cin >> vec1[i];
        }

        vector<ll>vec2;
        ll query;
        for(ll i=0; i<q; i++){
            cin >> query;
            if(vec2.empty() || vec2.back()>query)
                vec2.push_back(query);
            
        }

        for(ll i=0; i<n; i++){
            for(auto it : vec2){
                if(vec1[i] % (1<<it) == 0){
                    it = it-1;
                    vec1[i] += (1<<it);
                }
            }
        }
        for(auto it : vec1){
            cout<<it<<" ";
        }
        cout << endl;
    }
 
  return 0;
}
