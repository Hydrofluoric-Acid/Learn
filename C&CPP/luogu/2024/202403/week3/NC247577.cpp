/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
typedef struct{
    int pre,next;
}info;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    map<int,info> mp;
    for(int i=1;i<=n;i++){
        mp[i]={i-1,i+1};
    }
    while(k--){
        int opt,x;
        cin>>opt>>x;
        if(opt==1){
            mp[mp[x].pre].next=mp[x].next;//85/100
            mp[mp[x].next].pre=mp[x].pre;
            mp[x]={-1,-1};
        }else{
            cout<<mp[x].pre<<endl;
        }
    }
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
typedef struct{
    int x,pre,next;
}num;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<num> v(n+1);
    for(int i=1;i<=n;i++){
        v[i]={i,i-1,i+1};
    }
    while(k--){
        int opt,x;
        cin>>opt>>x;
        num tmp=v[x];
        if(opt==1){
            v[tmp.pre].next=tmp.next;//AC
            v[tmp.next].pre=tmp.pre;
        }else{
            cout<<tmp.pre<<endl;
        }
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2010;
using namespace std;
int pre[N],nex[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        pre[i]=i-1;
        nex[i]=i+1;
    }
    while(k--){
        int opt,x;
        cin>>opt>>x;
        if(opt==1){
            pre[x+1]=x-1;
            nex[x-1]=x+1;
        }else{
            cout<<pre[x]<<endl;
        }
    }
    return 0;
}