#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n, ans;
        cin>>n;

        for(long long  k=2; k<10e9; k++)
        {

            int den = pow(2,k) - 1;
            if(n%den == 0)
            {
                ans = n / den;
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
