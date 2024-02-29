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
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<int> v(a+1);
        for(int i=1;i<=a;i++){
            cin>>v[i];
        }
        int al=0,bo=0;
        for(int i=a;i>=1;i-=2){
            al+=v[i];
        }
        for(int i=a-1;i>=1;i-=2){
            bo+=v[i];
        }
        if(al>bo){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}