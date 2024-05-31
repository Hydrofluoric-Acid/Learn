#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int a[N],b[N],c[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,cnt0=0,cnt1=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[i]=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            cnt0+=(b[i]==0);
            cnt1+=(b[i]==1);
        }
        if(cnt0&&cnt1)cout<<"Yes"<<endl;
        else{
            bool flag=true;
            sort(c,c+n);
            for(int i=0;i<n;i++){
                if(a[i]!=c[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}