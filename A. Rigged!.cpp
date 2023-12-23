#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p_w, p_s, weight;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            if (i == 0)
            {
                p_w = x;
                p_s = y;
                weight = x;
            }
            else if (x >= p_w && y >= p_s)
            {
                weight = -1;
            }
        }
         cout << weight << endl;
    }
    return 0;
}
