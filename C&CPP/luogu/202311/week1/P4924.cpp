#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,r,z,ans[501][501];
void trans(int x,int y,int r,int z){
    int tmp[501][501];
    if(z==0){
        for(int i=x-r;i<=x+r;i++){
            for(int k=y-r;k<=y+r;k++){
                tmp[i][k]=ans[i][k];
            }
        }
        int x1=x+r,y1=y-r;
        for(int i=x-r;i<=x+r;i++){
            for(int k=y-r;k<=y+r;k++){
                ans[i][k]=tmp[x1][y1];
                x1--;
            }
            x1=x+r,y1++;
        }
    }else{
        for(int i=x-r;i<=x+r;i++){
            for(int k=y-r;k<=y+r;k++){
                tmp[i][k]=ans[i][k];
            }
        }
        int x1=x-r,y1=y+r;
        for(int i=x-r;i<=x+r;i++){
            for(int k=y-r;k<=y+r;k++){
                ans[i][k]=tmp[x1][y1];
                x1++;
            }
            y1--,x1=x-r;
        }
    }
}
int main(){
    cin>>n>>m;
    int index=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans[i][j]=index++;
        }
    }
    
    for(int i=0;i<m;i++){
        cin>>x>>y>>r>>z;
        trans(x,y,r,z);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ans[i][j];
            if(j!=n)cout<<" ";
        }
        cout<<endl;
    }
}