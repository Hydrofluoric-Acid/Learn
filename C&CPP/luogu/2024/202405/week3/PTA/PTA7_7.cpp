#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
double x[N],y[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>x[i]>>y[i];
        }
        double ans=INT_MAX*1.0;
        for(int i=n;i<2*n;i++){
            for(int j=0;j<n;j++){
                ans=min(ans,(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
                //cout<<(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])<<endl;
            }
        }
        printf("%.3f\n",sqrt(ans));
    }
    return 0;
}