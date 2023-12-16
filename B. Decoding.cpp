#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    vector<char> ans;

    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
            {
                ans.insert(ans.begin(), s[i]);
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        else{
            if(i % 2 == 0){
                ans.push_back(s[i]);
            }
            else{
                ans.insert(ans.begin(), s[i]);
            }
        }
    }

    for (auto it : ans)
    {
        cout << it;
    }
    cout << endl;

    return 0;
}
