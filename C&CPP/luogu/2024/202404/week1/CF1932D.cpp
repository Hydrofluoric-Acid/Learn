#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int n;
bool cmp(string a,string b){
    return a[0]<b[0];
}
void solve(vector<string> top,vector<string> a,vector<string> b,vector<string> c){
    sort(top.begin(),top.end(),cmp),sort(a.begin(),a.end(),cmp),sort(c.begin(),c.end(),cmp),sort(b.begin(),b.end(),cmp);
    vector<string> p1,p2;
    int g=0;
    //cout<<g<<' '<<g1<<' '<<g2<<endl;
    for(int i=0;i<a.size()/2;i++){
        p1.push_back(a[i]),p2.push_back(a[a.size()-1-i]);
    }
    if(a.size()&1){
        if(g==top.size()){
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        p1.push_back(a[a.size()/2]),p2.push_back(top[g++]);
    }
    for(int i=0;i<b.size()/2;i++){
        p1.push_back(b[i]),p2.push_back(b[b.size()-1-i]);
    }
    if(b.size()&1){
        if(g==top.size()){
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        p1.push_back(b[b.size()/2]),p2.push_back(top[g++]);
    }
    for(int i=0;i<c.size()/2;i++){
        p1.push_back(c[i]),p2.push_back(c[c.size()-1-i]);
    }
    if(c.size()&1){
        if(g==top.size()){
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        p1.push_back(c[c.size()/2]),p2.push_back(top[g++]);
    }
    if(g!=top.size()){
        for(int i=g;i<top.size();i+=2){
            p1.push_back(top[i]),p2.push_back(top[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<p1[i]<<' '<<p2[i]<<endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        char top;
        cin>>n>>top;
        vector<string> C,D,H,S;
        for(int i=0;i<2*n;i++){
            string s;
            cin>>s;
            if(s[1]=='C')C.push_back(s);
            else if(s[1]=='D')D.push_back(s);
            else if(s[1]=='H')H.push_back(s);
            else S.push_back(s);
        }
        if(top=='C')solve(C,D,H,S);
        else if(top=='D')solve(D,C,H,S);
        else if(top=='H')solve(H,C,D,S);
        else solve(S,C,D,H);
    }
    return 0;
}