#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;

    int pre;
    int ini = 1;
    long long ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> pre;

        if (pre >= ini)
        {
            ans += pre - ini;
        }
        else
        {
            ans += m - (ini - pre);
        }
        ini = pre;
    }
    cout << ans << endl;
    return 0;
}
