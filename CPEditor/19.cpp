#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
string s;
unordered_set<string> u;
/* ll to_num(string s){
    ll k=1,res=0;
    for(int i=s.length()-1;i>=0;i--){
        res+=(s[i]-'0')*k;
        k*=10;
    }
    return res;
} */
bool cmp(string a,string b){
    if(a.length()!=b.length()){
        return a.length()<b.length();
    }
    for(int i=0;i<a.length();i++){
        if(a[i]>b[i])return false;
        else if(a[i]<b[i])return true;
        else continue;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    vector<string> res(N);
    int t=0;
    int len=s.length();
    int p=0,q=0;
    while(p!=len){
        char c=s[q];
        if((c-'0')%2==0){
            res[t++]=(s.substr(p,q-p+1));
            q=q+1;
            p=q;
        }else{
            q++;
        }
    }
    sort(res.begin(),res.begin()+t,cmp);
    for(int i=0;i<t;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}