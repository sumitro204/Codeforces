#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);

        int cnt = 1, ans = 1; // Initialize cnt to 1


        for (int i=1; i<a; i++)
        {
            if ((arr[i] - arr[i - 1]) <= b)
            {
                cnt++;
                ans = max(cnt,ans);

            }
            else{
                cnt=1;
            }

        }

        cout << a-ans << endl;
    }
}
 
