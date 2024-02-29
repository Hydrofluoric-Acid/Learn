#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        if(h==0)h=12;
        if(h<=12){
            cout<<h<<" "<<m<<" am"<<endl;
        }else{
            cout<<(h-12)<<" "<<m<<" pm"<<endl;
        }
    }
    return 0;
}