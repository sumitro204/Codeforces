#include <bits/stdc++.h>
#define long long int
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string s = "abcdefghijklmnopqrstuvwxyz";
        string s1;

        for(int i=0; i<b; i++){

            s1.push_back(s[i]);
        }

        int k = 0;
        for(int i=0; i<n; i++){
            cout<<s1[k];
            k++;

            if(k==b){
                k=0;
            }
        }
        cout<<endl;
    }

    return 0;
}
