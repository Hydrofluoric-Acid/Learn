/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int count(int x){
    int res=0;
    if(!x)return 6;
    while(x){
        res+=a[x%10];
        x/=10;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int n=1;n<=24;n++){
        int ans=0;
        for(int i=0;i<1000;i++){
            for(int j=0;j<1000;j++){
                if(count(i)+count(j)+count(i+j)+4==n){
                    ans++;
                }
            }
        }
        cout<<ans<<",";
    }
    
    
    return 0;
} */
/* #include<cstdio>
using namespace std;
int a[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,9,6,9,29,39,38,65,88,128};
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",a[n]);
    return 0;
} */
#include<iostream>
using namespace std;
int a[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,9,6,9,29,39,38,65,88,128};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<a[n];
    return 0;
}