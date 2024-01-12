  /* https://codeforces.com/problemset/problem/1883/B*/

  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char,int>mp;
        for(auto ch : s){
            mp[ch]++;
        }
       long long even = 0;
       long long odd = 0;

       for(auto it : mp){
        if(it.second % 2 == 0){
            even++;
        }else{
            odd++;
        }
       }
       if(k < odd-1){
        cout <<"NO"<<endl;
        
       }else{
        cout << "YES" << endl;
       }

    }
   
    return 0;
  }
