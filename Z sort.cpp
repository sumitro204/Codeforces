#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;

 vector<int>v(n);
 for(int i=0; i<n; i++){
    cin >> v[i];
 }

 sort(v.begin(),v.end());

for(int i=1; i<=n; i++){
    if(i%2 == 0){
        cout<<v.back()<< " ";
        v.pop_back();
    }else{
        cout<<v.front()<<" ";
        v.erase(v.begin());
    }
}
 return 0;
} 
