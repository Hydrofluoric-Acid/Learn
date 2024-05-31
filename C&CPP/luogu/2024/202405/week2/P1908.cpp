#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 5e5 + 5;
using namespace std;
ll res=0;
int a[N],b[N];
void msort(int l,int r){
    if(l>=r)return;
    int mid=l+r>>1;
    msort(l,mid);
    msort(mid+1,r);

    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }else b[k++]=a[j++],res+=mid-i+1;
    }
    while(i<=mid)b[k++]=a[i++];
    while(j<=r)b[k++]=a[j++];
    for(int i=l;i<=r;i++)a[i]=b[i];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    msort(1,n);
    cout<<res;
    return 0;
}