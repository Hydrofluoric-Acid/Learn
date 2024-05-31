#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[70];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<70;i++)a[i]=inf;
    int k,ans=1;
    cin>>k;
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        if(y<a[x])a[x]=y;
    }
    int start,end;
    for(int i=0;i<70;i++){
        if(a[i]!=inf){
            start=i,end=a[i];
            break;
        }
    }
    while(true){
        int i;
        for(end;i<70;i++){
            if(a[i]!=inf){
                start=i,end=a[i];
                ans++;
                break;
            }
        }
        if(i==69)break;
    }
    cout<<ans;
    return 0;
}