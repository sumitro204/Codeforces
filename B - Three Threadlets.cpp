#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        int mini = min(a,min(b,c));
        
        if(a==b && b == c){
            cout << "YES" <<endl;
        }
        else if(b % mini == 0 && a % mini == 0 && c % mini == 0 && (b/mini -1) + (c/mini-1) + (a/mini-1) <= 3)
        {
          cout <<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
