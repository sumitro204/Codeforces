#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        map<ll, ll> mp;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mp[x]++;
        }

        if (mp.size() >= 3) {
            cout << "NO" << endl;
        } else {
            // Extract frequencies of elements into a vector for easier comparison
            vector<ll> freqs;
            for (auto it : mp) {
                freqs.push_back(it.second);
            }

            // Sort the frequencies to easily check the condition
            sort(freqs.begin(), freqs.end());

            // Check the condition based on the sorted frequencies
            if (freqs.size() == 1 || freqs[1] - freqs[0] <= 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
