#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string x = s1;
        string y = s2;

        ll len1 = s1.size();
        ll len2 = s2.size();
        while (1)
        {
            if(x.size() == y.size()){
                if (x == y)
                {
                    cout << x << endl;
                    break;
                }
                else{
                    cout << -1 <<endl;
                    break;
                }
             }
            else if(x.size() < y.size()){
                x += s1;
            }else{
                y += s2;
            }
        }
    }
}
