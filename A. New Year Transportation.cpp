#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,t;
    cin >> n >> t;
    vector<int>v(n);
    int pos = 0;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    while(pos < t-1){
      pos += v[pos];
    }
    if(pos == t-1){
        cout<<"YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
 
  return 0;
}
