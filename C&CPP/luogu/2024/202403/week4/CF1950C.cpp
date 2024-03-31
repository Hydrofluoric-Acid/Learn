#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int h,m;
        scanf("%d:%d",&h,&m);
        if(h==0){
            printf("12:%02d AM\n",m);
        }else if(h==12){
            printf("12:%02d PM\n",m);
        }
        else if(h<12){
            printf("%02d:%02d AM\n",h,m);
        }else{
            printf("%02d:%02d PM\n",h-12,m);
        }
    }
    return 0;
}