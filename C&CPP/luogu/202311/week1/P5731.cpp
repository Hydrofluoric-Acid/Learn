#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[10][10]={0},index=1;
    cin>>n;
    int x=1,y=0;
    while(index<=n*n){
        while(a[x][y+1]==0&&y<n){
            a[x][++y]=index++;
        }
        while(a[x+1][y]==0&&x<n){
            a[++x][y]=index++;
        }
        while(a[x][y-1]==0&&y>1){
            a[x][--y]=index++;
        }
        while(a[x-1][y]==0&&x>1){
            a[--x][y]=index++;
        }
    }
        
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%3d",a[i][j]);
        }
        cout<<endl;
    }
}