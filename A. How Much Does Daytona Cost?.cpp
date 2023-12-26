#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;

    vector<long long> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool check = false;

    for(int i=0; i<v.size(); i++){
        if(v[i] == k){
          check = true;
        }
    }
    if(check){
        cout <<"YES"<<endl;
    }
    else {
        cout <<"NO"<< endl;
    }

  }
  return 0;
}
