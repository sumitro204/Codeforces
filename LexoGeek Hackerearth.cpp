#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;

        bool ans = next_permutation(s.begin(),s.end());
        if(ans){
            cout<<s<<endl;
        }
        else{
            cout<<"no answer"<<endl;
        }
    }
}
