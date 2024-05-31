#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
string s[9];
int a[10][10];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<9;i++)cin>>s[i];
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++){
                a[i][j]=s[i-1][j-1]-'0';
            }
        }
        a[1][1]=a[1][2];
        a[2][5]=a[2][4];
        a[3][9]=a[3][8];
        a[4][2]=a[4][1];
        a[5][6]=a[5][5];
        a[6][7]=a[6][8];
        a[7][3]=a[7][2];
        a[8][4]=a[8][5];
        a[9][8]=a[9][7];
        for(int i=1;i<=9;i++,cout<<endl){
            for(int j=1;j<=9;j++){
                cout<<a[i][j];
            }
        }
    }
    return 0;
}