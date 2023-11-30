#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int t,index;
}p;
bool cmp(p a,p b){
    return a.t<b.t;
}
int main(){
    int n;
    long long ans=0;
    cin>>n;
    vector<p> ps(n);
    
    for(int i=0;i<n;i++){
        cin>>(ps[i].t);
        ps[i].index=i+1;
    }
    sort(ps.begin(),ps.end(),cmp);
    for(int i=0;i<n;i++){
        ans+=(n-1-i)*(ps[i].t);
        cout<<ps[i].index;
        if(i!=n-1)cout<<" ";
    }
    cout<<endl;
    printf("%.2lf",ans*1.0/n);
    return 0;
}