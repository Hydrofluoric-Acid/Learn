#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n;
string convert(int a){
    string s[36]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","k","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string res="";
    while(a){
        res+=s[a%n];
        a/=n;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<n;i++,cout<<endl){
        for(int j=1;j<=i;j++){
            cout<<convert(i)<<"*"<<convert(j)<<"="<<convert(i*j)<<" ";
        }
        
    }
    return 0;
}