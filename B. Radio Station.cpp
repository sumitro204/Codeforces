#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin >> n >> m;
   
   map<string, string> ipName;

   while(n--){
    string name, ip;
    cin >> name >> ip;
    ipName.insert({ip,name});
   }

   while(m--){
    string s1, address;
    cin >> s1 >> address;
    address.pop_back();

    cout<< s1 << " "<< address << "; #" << ipName[address] <<endl;
   }
 
 
 return 0;
}
