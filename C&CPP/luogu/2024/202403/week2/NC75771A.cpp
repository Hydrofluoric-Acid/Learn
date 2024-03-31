#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool cmp(pair<char,int> a,pair<char,int> b){
    return a.second>b.second;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,n;
    cin>>x>>n;
    vector<pair<char,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    if(v[0].second*1000<x){
        cout<<-1;
        return 0;
    }
    int t=ceil(x*1.0f/v[0].second);
    for(int i=0;i<t;i++){
        cout<<v[0].first;
    }
    return 0;
}