#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
int gcd(int a,int b) {
    if (b==0)return a;
    return gcd(b,a%b);
}

int findMinZ(int x,int y) {
    if(x==0&&y==0) {
        return 0;
    }
    int g=gcd(x, y);
    if((x+y)/g>1) {
        return -1;
    }else{
        int z=min(x,y)-((x+y)%min(x,y));
        return z;
    }
}
int main(){
    int x,y;
    cin>>x>>y;;
    cout<<findMinZ(x, y);
    return 0;
}
