#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin >> a >> b;

  int ans = a;
 while (a >= b) {
        int quotient = a / b;
        ans += quotient;
       
        int rem = a%b;
         a = quotient+rem;
    }

  cout << ans <<endl;

return 0;
}
