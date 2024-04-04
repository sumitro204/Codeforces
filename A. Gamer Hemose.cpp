#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        ll ans = 0;
        ll x = v[0];
        ll y = v[1];

        if (h % (x + y) == 0)
        {
            ans = 2 * (h / (x + y));
        }
        else if ((h % (x + y)) <= x)
        {
            ans = 2 * (h / (x + y)) + 1;
        }
        else
        {
            ans = 2 * (h / (x + y)) + 2;
        }

        cout << ans << endl;
    }
}
