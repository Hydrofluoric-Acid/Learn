#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        double ans=0,sum=0;
        cin>>n>>x>>y;
        vector<double> v(n);
        for(int i=0;i<n;i++){cin>>v[i];sum+=v[i];}
        if(n==1){
            cout<<min((v[0]-y<0?0:v[0]-y),v[0]*x/100)<<endl;
            continue;
        }
        sort(v.begin(),v.end(),greater<int>());
        double x1=v[0]*(100.0-x)/100+(v[1]-y<0?v[1]:y);
        double x2=v[1]*(100.0-x)/100+(v[0]-y<0?v[0]:y);
        double x=max(x1,x2);
        
        printf("%.12f\n",sum-x);
    }
    return 0;
}