#include<cstdio>
#include<vector>
#include<algorithm>
#define max(x,y) ((x)>(y)?(x):(y))
#define N 10010
using namespace std;
int main(){
    int v[N],k=0,mark[N],ans=-1;
    while(scanf("%d",&v[k++])!=EOF);
    k--;
    //printf("k=%d\n",k);
    vector<int> dp(k+1,0);
    for(int i=0;i<k;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(v[i]<=v[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    for(int i=0;i<k;i++){
        //printf("%d ",dp[i]);
        ans=max(ans,dp[i]);
    }
    printf("%d\n",ans);
    //reverse(v,v+k+1);
    /* for(int i=0;i<k;i++){
        printf("%d ",v[i]);
    } */
    //fill(dp.begin(),dp.end(),0);
    ans=-1;
    for(int i=0;i<k;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(v[i]>v[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    for(int i=0;i<k;i++){
        ans=max(ans,dp[i]);
    }
    printf("%d",ans);
    return 0;
}