#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>=0){
        cout<<n<<endl;
    }
    else{
        int last = n%10;
        int del_last = n/10;

        int sec_del = (del_last - (del_last)%10) + last;

        cout<<max(del_last, sec_del);
    }
}
