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

        int sum = 0;
        int x;
        for (int i = 0; i < n - 1; i++)
        {

            cin >> x;
            sum += x;
        }

        cout << -(sum) << endl;
    }

    return 0;
}
