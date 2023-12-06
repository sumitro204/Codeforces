#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string,int> &p1, const pair<string,int> &p2){
       
       if(p1.second != p2.second){
        return p1.second > p2.second;
       }
       else{
        return p1.first < p2.first;
       }
}

int main()
{
   int n;
   cin >> n;
    vector<pair<string,int> > v;

    for(int i=0; i<n; i++){
        string x;
        int y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end(), cmp);

    for(auto it : v){
        cout << it.first <<" "<< it.second<<endl;
    }

   
return 0;
}
