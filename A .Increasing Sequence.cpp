#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long cnt = 1;
        
        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
         if(cnt == x){
            cnt++;
         }
         cnt++;
        }
        cout << cnt -1 << endl;
    }
 
return 0;
}
