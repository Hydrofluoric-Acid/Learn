/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int check(int i,int j,ll d){
    ll e=i*1ll+j*2ll;
    if(e==d)return 0;
    if(e>d)return 1;
    else return -1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        ll d=(1ll*mp[1]+2ll*mp[2]);
        if(d&1){
            cout<<"NO"<<endl;
            continue;
        }
        if((mp[1]==0&&mp[2]%2==0)||(mp[1]%2==0&&mp[2]==0)){
            cout<<"YES"<<endl;
            continue;
        }
        d>>=1;
        bool f=false;
        for(int i=0;i<=mp[1];i++){
            int l=0,r=mp[2];
            while(l<r){
                int mid=l+r>>1,res=check(i,mid,d);
                if(res==0){
                    f=true;
                    break;
                }else if(res=1){
                    r=mid;
                }else l=mid+1;
            }
            if(f)break;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,c1=0,c2=0;
        cin>>n;
        ll d=0;
        for(int i=0;i<n;i++){
            cin>>x;
            d+=x;
            if(x==1)c1++;
            else c2++;
        }
        if(d&1){
            cout<<"NO"<<endl;
            continue;
        }else{
            d>>=1;
            bool f=false;
            for(int i=0;i<=c2;i++){
                if(d-i*2ll>=0&&d-i*2ll<=c1){
                    f=true;
                    break;
                }
            }
            if(f)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}