#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        char arr[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> arr[i][j];
            }
        }

        int cnt_A = 0;
        int cnt_B = 0;
        int cnt_C = 0;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j] == 'A'){
                    cnt_A++;
                }
                if(arr[i][j] == 'B'){
                    cnt_B++;
                }
                if(arr[i][j] == 'C'){
                    cnt_C++;
                }
            }
        }
        if(cnt_A == cnt_B){
            cout<<"C"<<endl;
        }
        if(cnt_A == cnt_C){
            cout<<"B"<<endl;
        }
        if(cnt_C == cnt_B){
            cout<<"A"<<endl;
        }
      
        }

    return 0;
}
