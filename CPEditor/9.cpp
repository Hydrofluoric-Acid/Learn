#include<cstdio>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int cal(int a,int b){
    return (a-b)*(a-b);
}
int main(){
    int n;
    long long ans=0;
    scanf("%d",&n);
    vector<int> a(n+1,0),b(n+1,0);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a.begin(),a.end());
    for(int i=0,j=0;i*2<=n;i++){
        b[j++]=a[i],b[j++]=a[n-i];
    }
    if(!n&1)b[n]=a[n/2];
    for(int i=0;i<n;i++){
        ans+=cal(b[i],b[i+1]);
    }
    cout<<ans;
    return 0;
}