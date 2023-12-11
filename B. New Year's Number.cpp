#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    long long n;
    for(long long i = 0; i<t; i++){
        cin>>n;

        long long a,b;

        a = n/2020;
        b = n%2020;

        if(a>=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
