#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
string s;
bool isPrime(string s){
    int a=stoi(s);
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
void dfs(int i,vector<int> v){
    if(i==v.size())return;

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        reverse(s.begin(),s.end());
        vector<int> v;
        for(int i=0;i<8;i++){
            if(s[i]=='-')v.push_back(i);
        }
        if(v.size()==0||(s[0]>='0'&&s[0]<='9'&&(s[0]-'0')%2==0)){
            cout<<0<<endl;
            continue;
        }
    }
    return 0;
}