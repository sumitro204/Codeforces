#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int k = min(m,n);
    if(k%2 == 0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }

    return 0;
}
