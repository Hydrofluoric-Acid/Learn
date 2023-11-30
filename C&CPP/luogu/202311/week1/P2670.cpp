#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[101][101]={0};
    int n,m;
    cin>>n>>m;
    cin.ignore();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
        cin.ignore();
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='*'){continue;}
            int count=0;
            if(a[i-1][j-1]=='*')count++;
            if(a[i-1][j]=='*')count++;
            if(a[i-1][j+1]=='*')count++;
            if(a[i][j-1]=='*')count++;
            if(a[i][j+1]=='*')count++;
            if(a[i+1][j-1]=='*')count++;
            if(a[i+1][j]=='*')count++;
            if(a[i+1][j+1]=='*')count++;
            a[i][j]=count+48;  
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}