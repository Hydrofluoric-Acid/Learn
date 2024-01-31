#include<cstdio>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int> v(n+1),maxA(n+1,0),minA(n+1,0);
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
    }
    deque<int> minq,maxq;
    for(int i=1;i<=n;i++){
        while(!minq.empty()&&minq.front()<i-k+1){
            minq.pop_front();
        }
        while(!maxq.empty()&&maxq.front()<i-k+1){
            maxq.pop_front();
        }
        while(!minq.empty()&&v[minq.back()]>v[i]){
            minq.pop_back();
        }
        while(!maxq.empty()&&v[maxq.back()]<v[i]){
            maxq.pop_back();
        }
        minq.push_back(i);maxq.push_back(i);
        if(i>=k){
            minA[i]=v[minq.front()],maxA[i]=v[maxq.front()];//答案在双端队列头部
        }
    }
    for(int i=k;i<=n;i++){
        printf("%d ",minA[i]);
    }
    printf("\n");
    for(int i=k;i<=n;i++){
        printf("%d ",maxA[i]);
    }
    return 0;
}