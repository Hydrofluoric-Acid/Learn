#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
bool check(int a){
    string s=to_string(a);
    if(a%7==0)return true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='7')return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a,k;
        cin>>n>>a>>k;
        for(int i=0;i<k;i++){
            if(i==0){
                a+=1;
            }else a+=n;
            if(check(a))cout<<"p ";
            else cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}