#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof a);
        int n,l,r,q,u;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i]+=a[i-1];
        }
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>l>>u;
            int li=l,ri=n;
            while(li<ri){
                int mid=(li+ri+1)>>1;
                if(a[mid]-a[l-1]<=u){
                    li=mid;
                }else{
                    ri=mid-1;
                }
            }
            li=ri;
            int s1=abs(a[li]-a[l-1]-u),s2=abs(a[li+1]-a[l-1]-u);
            if(li==n)cout<<li<<" ";
            else{
                if(s1<=s2-1)cout<<li<<" ";
                else cout<<li+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}