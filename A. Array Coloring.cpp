#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int sum1 = 0;
        int sum2 = 0;
        sort(arr,arr+n);
        int even = 0;
        int odd = 0;

        for(int i=0; i<n; i++){
            sum1 += arr[i];
        }
        if(sum1 % 2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
