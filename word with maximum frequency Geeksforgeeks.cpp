//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        
        string tem;
        vector<string>v;
        for(auto it : s){
            if(isspace(it)){
                v.push_back(tem);
                tem.clear();
            }
            else{
                tem += it;
            }
        }
        v.push_back(tem);
        
        int maxFrq = 0;
        map<string,int>m;
        for(auto it : v){
            m[it]++;
            maxFrq = max (maxFrq, m[it]);
        }
        
        string ans;
        for(auto it : v){
            if(m[it] == maxFrq){
                ans = it;
                break;
            }
        }
        string final = ans + maxFrq;
        return final;
}

