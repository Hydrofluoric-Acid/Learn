#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    int n,k,mx=INT_MAX,md=INT_MIN;
    cin>>n>>k;
    if(md-mx>=n){
        cout<<"1.0";
        return 0;
    }
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int a=upper_bound(v.begin(),v.end(),v[i]+k)-v.begin();
        printf("%.4f",1.0*(a-i)/n);
    }
    return 0;
}