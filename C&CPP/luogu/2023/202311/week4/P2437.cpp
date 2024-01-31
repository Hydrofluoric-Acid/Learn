#include<iostream>
using namespace std;
int f[1005][1005],len=1;
void pluss(int x){
    for(int i=1;i<=len;i++){
        f[x][i]=f[x-1][i]+f[x-2][i];
    }
    for(int i=1;i<=len;i++){
        if(f[x][i]>9){
            f[x][i+1]+=f[x][i]/10;
            f[x][i]%=10;
        }
        if(f[x][len+1])len++;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    f[1][1]=1,f[2][1]=2;
    for(int i=3;i<=n-m;i++){
        pluss(i);
    }
    for(int i=len;i;i--){
        cout<<f[n-m][i];
    }
    return 0;
}