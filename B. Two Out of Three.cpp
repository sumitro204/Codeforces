#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin >> t;

  while(t--){
   long long n;
   cin >> n;

   vector<long long> v(n);
   for(int i=0; i<n; i++){
    cin >> v[i];
   }

   map<long long, long long> m;
   for(auto it : v){
      m[it]++;
   }

   vector<long long> ans;
   for(auto it : m){
    if(it.second > 1){
        ans.push_back(it.first);
    }
   }
   if(ans.size() < 2){
    cout << "-1" <<endl;
   }

   else{
   for(auto it : v){
    if(it == ans[0]){
        ans[0] = -1;
        cout << "2" << " ";
    }
    else if(it == ans[1]){
        ans[1] = -1;
        cout <<"3" << " ";
    }
    else {
        cout << "1" <<" ";
    }
   }
   cout<<endl;
   }
  }

  return 0;
}
