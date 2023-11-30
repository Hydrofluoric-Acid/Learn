#include<iostream>
#include<algorithm>
using namespace std;
int a[51][51];
int cal(int i,int j,int n,int m){
    int ans=0,tmp,x,y;
    for(x=1;x<=i;x++){
        for(y=1;y<=m;y++){
            if(a[x][y]!=-1)ans++;
        }
    }
    for(x;x<=j;x++){
        for(y=1;y<=m;y++){
            if(a[x][y]!=0)ans++;
        }
    }
    for(x;x<=n;x++){
        for(y=1;y<=m;y++){
            if(a[x][y]!=1)ans++;
        }
    }
    return ans;
}
int main(){
    int n,m,ans=50000,index=0,tmp,b,c,d;
    cin>>n>>m;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=1;j<=m;j++){
            int k;
            if(s[j-1]=='W')k=-1;
            else if(s[j-1]=='B')k=0;
            else if(s[j-1]=='R')k=1;
            a[i][j]=k;
        }
    }
    /* for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } */
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            ans=min(cal(i,j,n,m),ans);
        }
        
    }
    cout<<ans;
}