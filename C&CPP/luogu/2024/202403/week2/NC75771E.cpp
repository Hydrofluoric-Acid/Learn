#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
typedef struct{
    int x,pos;
}num;
bool cmp1(num a,num b){
    return a.x<b.x;
}
bool cmp2(num a,num b){
    return a.pos<b.pos;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<num>::iterator it;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<num> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].x;
            v[i].pos=i;
        }
        sort(v.begin(),v.end(),cmp1);
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            while((it=lower_bound(v.begin(),v.end(),x))!=v.end()&&*it==x){

            }
        }
    }
    return 0;
}