#include<cstdio>
#include<vector>
#include<deque>
using namespace std;
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int> v(n+1);
    deque<int> q;
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
    }
    for(int i=1;i<=n;i++){
        while(!q.empty()&&q.front()<i-k+1){
            q.pop_front();
        }
        while(!q.empty()&&v[q.back()]<v[i]){
            q.pop_back();
        }
        q.push_back(i);
        /* if(i>=k){
            ans[i]=v[q.front()];
        } */
        if(i>=k){
            printf("%d\n",v[q.front()]);
        }
    }
    /* for(int i=k;i<=n;i++){
        printf("%d\n",ans[i]);
    } */
    return 0;
}