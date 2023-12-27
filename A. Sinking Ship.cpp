#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    vector<string> rats, woman_child, man, captain;
    while (t--)
    {
        string x, y;
        cin >> x >> y;

        if (y == "rat")
        {
            rats.push_back(x);
        }
        else if (y == "woman" || y == "child")
        {
            woman_child.push_back(x);
        }
        else if (y == "man")
        {
            man.push_back(x);
        }
        else if (y == "captain")
        {
            captain.push_back(x);
        }
    }

        for (auto r : rats)
        {
            cout << r << endl;
        }
        for (auto wc : woman_child)
        {
            cout << wc << endl;
        }
        for (auto ma : man)
        {
            cout << ma << endl;
        }
        for (auto c : captain)
        {
            cout << c << endl;
        }

    return 0;
}
