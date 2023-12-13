#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   map<long long,long long>m;

   while(t--){
    long long x;
    cin >> x;
    m[x]++;
   }
  
  long long maxi = 0;
  for(auto it : m){
    if(it.second > maxi){
        maxi = it.second;
    }
  }

  cout << maxi << endl;
   
  return 0;
}
