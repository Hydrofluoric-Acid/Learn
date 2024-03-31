#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n;
bool check(string a,string b,string c){
    int d=stoi(a),e=stoi(b),f=stoi(c);
    if(e%f==0&&d+e/f==n)return true;
    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    ll ans=0;
    string s="123456789";
    do{
        for(int i=0;i<=6;i++){
            if(stoi(s.substr(0,i+1))>=n)break;
            for(int j=i+1;j<=7;j++){
                if(check(s.substr(0,i+1),s.substr(i+1,j-i),s.substr(j+1,8-j))){
                    ans++;
                }
            }
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans;
    return 0;
}