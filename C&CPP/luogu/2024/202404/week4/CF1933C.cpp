/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
ll fastpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1)res=res*a;
        a=a*a;
        b>>=1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,l,u;
        cin>>a>>b>>l;
        int ai=log(l)/log(a)+1,bj=log(l)/log(b)+1;
        set<int> s;
        if(a==1&&b==1){
            cout<<1<<endl;
            continue;
        }else if(a==1){
            for(int j=0;j<=bj;j++){
                if(l%fastpow(b,j)==0){
                    s.insert(l/fastpow(b,j));
                }
            }
            cout<<s.size()<<endl;
            continue;
        }else if(b==1){
            for(int i=0;i<=ai;i++){
                if(l%fastpow(a,i)==0){
                    s.insert(l/fastpow(a,i));
                }
            }
            cout<<s.size()<<endl;
            continue;
        }
        
        
        for(int i=0;i<=ai;i++){
            for(int j=0;j<=bj;j++){
                if(l%(fastpow(a,i)*fastpow(b,j))==0){
                    s.insert(l/(fastpow(a,i)*fastpow(b,j)));
                }
            }
        }
        cout<<s.size()<<endl;
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
        int a,b,l;
        cin>>a>>b>>l;
        set<int> s;
        if(a==1&&b==1){
            cout<<1<<endl;
            continue;
        }else if(a==1){
            for(int y=1;y<=l;y*=b){
                if(l%y==0){
                    s.insert(l/y);
                }
            }
            cout<<s.size()<<endl;
            continue;
        }else if(b==1){
            for(int x=1;x<=l;x*=a){
                if(l%x==0){
                    s.insert(l/x);
                }
            }
            cout<<s.size()<<endl;
            continue;
        }
        for(int x=1;x<=l;x*=a){
            for(int y=1;y<=l;y*=b){
                ll k=1ll*l/(1ll*x*y);
                if(1ll*k*x*y==l){
                    s.insert(l/(x*y));
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}