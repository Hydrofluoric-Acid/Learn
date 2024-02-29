#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int count(int n,int x){
    int res=0;
    while(n){
        if(n%10==x)res++;
        n/=10;
    }
    return res;
}
int dfs(int n,int x){
    int res=0;
    if(n==0)return res;
    else{
        res+=dfs(n-1,x)+count(n,x);
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<10;i++){
        cout<<dfs(1,i)-dfs(100000,i)<<endl;
    }
    return 0;
}