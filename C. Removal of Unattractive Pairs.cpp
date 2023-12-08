#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string tem = s;
    sort(tem.begin(), tem.end());
    if(tem[0] == tem[n-1]){
        cout<< n <<endl;
        continue;
    }
   
    
    map<char,int>m;
    for(auto it : tem){
        m[it]++;
    }

    int Maxi = 0;
    for(auto it : m){
        Maxi = max(Maxi,  it.second);
    }
    int len = max(0, Maxi - (n-Maxi));
    
    if(n%2 == 1 && len == 0){
        len = 1;
    }
    

    cout<< len <<endl;

  }
return 0;
}
