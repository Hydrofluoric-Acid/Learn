#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m[12]={31,29,31,30,31,30,31,31,30,31,30,31},
                ds=0,d=366,x,y;
int co(int a1,int a2,int b1,int b2){
    if(a1==b1)return b2-a2-1;
    int dsp=0;
    dsp+=(m[a1-1]-a2-1+b2);
    if(b1-a1>1){
        for(int i=a1;i<b1-1;i++){
            dsp+=m[i];
        }
    }
    return dsp;
}
int main(){
    
    cin>>n;
    if(n==0){
        cout<<86400;
        return 0;
    }
    n-=1;
    int x1,x2;
    cin>>x1>>x2;
    while(n--){
        cin>>x>>y;
        ds=max(ds,co(x1,x2,x,y));
        x1=x,x2=y;
    }
    //cout<<ds<<endl;
    //ds++;
    int ans=ceil(86400*ds*1.0/d);
    cout<<ans<<endl;
    return 0;
}