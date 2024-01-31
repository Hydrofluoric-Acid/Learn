#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int ans=0,a,n;
    scanf("%d",&n);
    scanf("%d",&ans);
    n--;
    while(n--){
        scanf("%d",&a);
        ans=ans^a;
    }
    printf("%d",ans);
    return 0;
}