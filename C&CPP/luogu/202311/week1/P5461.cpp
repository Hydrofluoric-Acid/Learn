#include<bits/stdc++.h>
using namespace std;
int n,a[1024][1024];
int cal(int x,int y,int n){
    if(n==0)a[x][y]=1;
    else{
        cal(x+(1<<n-1),y,n-1);
        cal(x,y+(1<<n-1),n-1);
        cal(x+(1<<n-1),y+(1<<n-1),n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cal(0,0,n);
    for(int i=0;i<1<<n;i++){
        for(int j=0;j<1<<n;j++){
            cout<<a[i][j];
            if(j!=(1<<n)-1)cout<<" ";
        }
        cout<<endl;
    }
}