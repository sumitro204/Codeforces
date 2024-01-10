#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll digitSum(ll num){
    ll sum = 0;
    while(num != 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

ll findNumber(ll n, ll k){
    while(true){
        ll sum = digitSum(n);
        if(sum % k == 0){
            return n;
            break;
        }else{
        n++;
        }
    }
}

int main()
{
ll t;
cin >> t;
while(t--){
  ll n,k;
  cin >> n >> k;

  ll res = findNumber(n,k);

  cout << res << endl;
}

return 0;
}
