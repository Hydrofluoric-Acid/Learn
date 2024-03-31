#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    int h,m;
    scanf("%d:%d",&h,&m);
    pair<int,int> s={h,m};
    vector<pair<int,int>> v;
    for(int i=0;i<=23;i++){
        if(i/10+i%10*10<60){
            v.push_back({i,i/10+i%10*10});
        }
    }
    int i;
    for(i=0;i<v.size();i++){
        if(v[i].first>=s.first)break;
    }
    int n=v.size();
    if(s.first==23&&s.second>32){
        cout<<"23:32\n0:0";
    }
    else if(v[i]==s){
        cout<<v[(i-1+n)%n].first<<':'<<v[(i-1+n)%n].second<<endl;
        cout<<v[(i+1)%n].first<<':'<<v[(i+1)%n].second<<endl;
    }else{
        cout<<v[(i-1+n)%n].first<<':'<<v[(i-1+n)%n].second<<endl;
        cout<<v[i].first<<':'<<v[i].second<<endl;
    }
    return 0;
}