#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   map<string,string>mp;

   while(t--){
      string x,y;
      cin >> x >> y;
      bool ok = false;

      for(auto it : mp){
        if(it.second == x){
            mp[it.first] = y;
            ok = true;
        }
      }
      if(!ok){
        mp.insert({x,y});
      }
   }
   cout << mp.size() << endl;
   for(auto it : mp){
    cout << it.first <<" "<< it.second << endl;
   }


  return 0;
}
