#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin >> n >> m;
  map<string,string>mp;

  while(m--){
    string s1,s2;
    cin >> s1 >> s2;
    mp.insert({s1,s2});
  }
  while(n--){
    string s3;
    cin >> s3;
    string s4;
    s4 = mp[s3];

    if(s4.size() < s3.size()){
        cout << s4 <<" ";
    }
    else{
        cout << s3 <<" ";
    }
  }
return 0;
}
