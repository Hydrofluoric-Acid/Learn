#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,nums[20],test=1;
    while(cin>>n){
        long long ans=0;
        for(long long i=0;i<n;i++){
            cin>>nums[i];
        }
        for(long long i=0;i<n-1;i++){
            long long s=1;
            for(long long j=i;j<n;j++){
                s*=nums[j];
                ans=max(ans,s);
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",test,ans);
        test++;
    }
    return 0;
}