# 快速幂

```
#include<iostream>
using namespace std;
long long pows(long long a,long long b,long long c){
    long long ans=1;
    while(b){
        if(b%2==1){//b&1
            ans*=a;  
        }
        a*=a;
        b/=2;//b>>=1;
    }
    return ans;
}
int main(){
    cout<<pows(2,2,3);
    return 0;
}
```
# 欧几里得算法
```
int gcd(int a, int b){
    if (a%b == 0) {
        return b;
    }
    return gcd(b, a%b);
}
```
非递归实现
```
int gcd(int a, int b){
    int temp = a;
    while(a%b != 0){
        a = b;
        b = temp%b;
        temp = a;
    }
    return b;
}
```
# 最小公倍数
```
int MinMultiple( int a, int b){
    return (a * b)/gcd(a, b);
}
```
