/* #include <bits/stdc++.h>
#define endl "\n"
#define lowbit(x) ((x)&-(x))
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 1;
using namespace std;
int tree[N];
void update(int x,int d){
    while(x<=N){
        tree[x]+=d;
        x+=lowbit(x);
    }
}
int sum(int x){
    int res=0;
    while(x){
        res+=tree[x];
        x-=lowbit(x);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n){
        if(!n)break;
        int l,r;
        for(int i=0;i<n;i++){
            cin>>l>>r;
            for(int i=l;i<=r;i++){
                update(i,1);
            }
        }
        for(int i=1;i<=n;i++){
            cout<<sum(i)-sum(i-1)<<' ';//o(N^2 logn)大于暴力的复杂度
        }
        cout<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
#define lowbit(x) ((x)&-(x))
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 1;
using namespace std;
int tree[N];
void update(int x,int d){
    while(x<=N){
        tree[x]+=d;
        x+=lowbit(x);
    }
}
ll sum(int x){
    ll res=0;
    while(x>0){
        res+=tree[x];
        x-=lowbit(x);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n){
        if(!n)break;
        int l,r;
        for(int i=0;i<n;i++){
            cin>>l>>r;
            update(l,1);
            update(r+1,-1);//差分操作
        }
        for(int i=1;i<=n;i++,cout<<endl){//区间修改+单点查询
            cout<<sum(i)<<' ';//sum就是前x个数之和，而tree是差分数组的树状数组
        }
    }
    return 0;
}