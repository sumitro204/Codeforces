#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--){

    string s;
    cin >> s;

    vector<pair<long long, char> > cap,small,ans;

    for(long long i=0; i<s.size(); i++){
     if(s[i] != 'b' && s[i] != 'B'){
      if(islower(s[i])){
        small.push_back({i, s[i]});
      }
      else{
        cap.push_back({i, s[i]});
      }
     }
     else{
      if(s[i] == 'b' && !small.empty()){
        small.pop_back();
      }
      else if(s[i] == 'B' && !cap.empty()){
        cap.pop_back();
      }
     }
    }
    
    for(auto &it : small){
      ans.push_back(it);
    }
    for(auto &it : cap){
      ans.push_back(it);
    }

    sort(ans.begin(), ans.end());

    for(auto &it : ans){
      cout<<it.second;
    }
    cout<<endl;

   }

  return 0;
}

