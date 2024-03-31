#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first)return a.second<b.second;
    return a.first<b.first;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pair<int,int> p1={a-(b<1),(b+60-1)%60},p2={a-(b<3),(b+60-3)%60},p3={a-(b<5),(b+60-5)%60};
        if(mp[p1]==0){
            v.push_back(p1);
            mp[p1]++;
        }
        if(mp[p2]==0){
            v.push_back(p2);
            mp[p2]++;
        }
        if(mp[p3]==0){
            v.push_back(p3);
            mp[p3]++;
        }
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}