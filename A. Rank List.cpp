#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &p1, const pair<int,int>&p2)
{
   if(p1.first>p2.first) return 1;
   else if(p1.first == p2.first) return (p1.second<p2.second);

   else return 0;
}

int main()
{   
    int n,k;
    cin>>n>>k;
    vector<pair<int, int> >v;

    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    } 

    sort(v.begin(),v.end(), cmp);

    int ans = 0;
      
    for(auto it : v){
        if(it == v[k-1]){
            ans++;
        }
    }
    cout<<ans<<endl ;
    
}

