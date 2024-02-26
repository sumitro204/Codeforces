#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+10;
vector<ll> vec(N,0);

int sumOfDigits(int n)
{
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
void preSum()
{   
    for(int i=1; i<N; i++){
        vec[i] = vec[i-1] + sumOfDigits(i);
    }
}
int main()
{   
    preSum();
    ll t; cin >> t;
    while(t--){
        int n; cin >> n;

        cout << vec[n] << endl;
    }
 
return 0;
} 
