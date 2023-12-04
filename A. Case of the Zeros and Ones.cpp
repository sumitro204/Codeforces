#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int zero = count(s.begin(),s.end(),'0');
    int one = count(s.begin(),s.end(),'1');

    int Min = min(zero,one);

    cout<<n-(2*Min)<<endl;

    return 0;
}
