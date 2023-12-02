#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b>=10)
        {
            cout<<"YES"<<endl;

        }
        else if(a+c>=10)
        {
            cout<<"YES"<<endl;

        }
        else if(c+b>=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }

    return 0;
}
 
