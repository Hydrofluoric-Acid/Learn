#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int p=1,x=1,y=1,n,m,k;//上、右、下、左
void go(int t){
    if(t==1){
        if(x==1){
            x=n;
        }else{
           x-=1; 
        }
    }else if(t==2){
        if(y==m){
            y=1;
        }else{
            y+=1;
        }
    }else if(t==3){
        if(x==n){
            x=1;
        }else{
            x+=1;
        }
    }else if(t==4){
        if(y==1){
            y=m;
        }else{
            y-=1;
        }
    }
}
void change(int t){
    if(t==1){
        if(p==4){
            p=1;
        }else{
            p+=1;
        }
        go(p);
    }else if(t==-1){
        if(p==1){
            p=4;
        }else{
            p-=1;
        }
        go(p);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    vector<vector<char>> v(n+1,vector<char>(m+1,'.'));
    for(int i=0;i<k;i++){
        if(v[x][y]=='.'){
            v[x][y]='#';
            change(1);
        }else{
            v[x][y]='.';
            change(-1);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}