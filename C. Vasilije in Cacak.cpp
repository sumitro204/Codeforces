#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin >> t;

    while(t--){
      long long n,k,x;
      cin >> n >> k >> x;
      long long Mini = k*(k+1)/2;
      long long Total = n*(n+1)/2;
      long long Diff = n - k;
      long long Maxi = Total - (Diff*(Diff+1)/2);

      if(x > Maxi || x < Mini){
        cout <<"NO"<<endl;
      }
      else{
        cout <<"YES"<<endl;
      }
 }
 return 0;
}
