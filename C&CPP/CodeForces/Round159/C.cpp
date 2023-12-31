#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1){cout<<1<<endl;continue;}
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int b=gcd(v[0],v[1]);
        int an1=v[n-1]+b;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(an1-v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}