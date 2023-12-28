#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;

        set<char> sets;
        int ans = 0;
        for(auto it : s){
            sets.insert(it);
            ans+= sets.size();
         }
        cout << ans << endl;
    }
 
   return 0;
}
