#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    int k = 0;
    if(ch == 'R'){
        k = -1;
    } else k = 1;

    string s1;
    cin>>s1;

    for(int i=0; i<s1.size(); i++){
        for(int j=0; j<s.size(); j++){

            if(s1[i] == s[j]){

                s1[i] = s[j+k];
                break;
            }
        }
    }

    cout<<s1;

    return 0;
}
