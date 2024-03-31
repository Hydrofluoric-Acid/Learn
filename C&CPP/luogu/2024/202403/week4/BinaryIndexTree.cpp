#include <bits/stdc++.h>
#define endl "\n"
#define lowbit(x) ((x)&-(x))
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1000;
using namespace std;
int tree[N];
void update(int x,int d){
    while(x<=N){
        tree[x]+=d;
        x+=lowbit(x);
    }
}
int sum(int x){
    int ans=0;
    while(x>0){
        ans+=tree[x];
        x-=lowbit(x);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[11]={0,4,5,6,7,8,9,10,11,12,13};
    for(int i=1;i<=10;i++){
        update(i,a[i]);
    }
    cout<<sum(5)-sum(0)<<endl;
    update(5,1);
    cout<<sum(5)-sum(0);
    return 0;
}