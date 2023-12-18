#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a, b;
        
        map <int,int> frq;

        for(int i=0; i<n-1; i++){
            cin >> a >> b;
            frq[a]++;
            frq[b]++;
            
        }
        long long sum = 0;

        for(auto it : frq){
            if(it.second == 1){
              sum++;
            }
        }
        long long ans = 0;

        if(sum % 2 == 1){
            ans = (sum+1) / 2;
        }
        else{
            ans = sum / 2;
        }

        cout << ans << endl;
    }
        return 0;
}
