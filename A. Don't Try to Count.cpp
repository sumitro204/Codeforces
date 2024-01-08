#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll t;
 cin >> t;
 while(t--){
    ll n,m;
    cin >> n >> m;

    string s,x;
    cin >> x >> s;
    bool check = false;

    for(int i=0; i<10; i++){
        if(x.find(s) != -1){
            cout << i << endl;
            check = true;
            break;
        }else{
            x+=x;
        }
    }
    if(check == false){
        cout << "-1" << endl;
    }
 }
 return 0;
}
