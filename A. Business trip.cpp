#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[12];

    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }

    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }

    sort(arr,arr+12);
    int cnt = 0;
    int sum = 0;

    for(int i=11; i>=0; i--)
    {

        sum=sum+arr[i];
        cnt++;

        if(sum>=n)
        {
            cout<<cnt<<endl;
            return 0;
        }
    }
    cout<<-1;

    return 0;


}
