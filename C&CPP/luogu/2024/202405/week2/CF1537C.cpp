#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int a[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int md=INT_MAX,m;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<md){
                md=a[i+1]-a[i];
                m=i;
            }
        }
        cout<<a[m]<<' ';
        for(int i=m+2;i<n;i++){
            cout<<a[i]<<' ';
        }
        for(int i=0;i<m;i++){
            cout<<a[i]<<' ';
        }
        cout<<a[m+1]<<endl;
    }
    return 0;
}