#include <bits/stdc++.h>
using namespace std;

int main()
{   
   
    int t;
    cin>>t;
    vector<pair<string,string> > v;
    for(int i=0; i<t; i++){
        string s1,s2;
        cin>>s1>>s2;
        v.push_back({s1,s2});       
    }
    sort(v.begin(),v.end());
    int siz = unique (v.begin(),v.end()) - v.begin();  
    cout<<siz<<endl; 
}
