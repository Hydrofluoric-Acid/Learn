#include<queue>
#include<cstdio>
using namespace std;
int a[1010];
int main(){
    int M,N,ans=0,k;
    scanf("%d %d",&M,&N);
    queue<int> q;
    while(N--){
        scanf("%d",&k);
        if(a[k]){
            continue;
        }else{
            a[k]=1;
            ans++;
            if(q.size()==M){
                a[q.front()]=0;
                q.pop();
                
            }
            q.push(k);
        }
    }
    printf("%d",ans);
    return 0;
}