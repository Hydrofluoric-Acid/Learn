#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
double a[N];
int n;
double d,h;
double f(int i){
    return (a[i]+h-a[i+1])/h*d;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>d>>h;
        for(int i=1;i<=n;i++)cin>>a[i];
        double ans=0.5*h*d;
        for(int i=n-1;i>=1;i--){
            if(a[i]+h>a[i+1]){
                ans+=0.5*(d+f(i))*(a[i+1]-a[i]);
            }else{
                ans+=0.5*h*d;
            }
        }
        printf("%.6f\n",ans);
    }
    return 0;
}