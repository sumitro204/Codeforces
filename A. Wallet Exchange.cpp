#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;

        if(abs(a-b)%2 == 0){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }
 
return 0;
}
