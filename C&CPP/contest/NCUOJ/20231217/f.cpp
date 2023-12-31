#include<iostream>
#include<vector>
using namespace std;
void N(int,vector<vector<char>> &v,int m);
void C(int,vector<vector<char>> &v,int m);
void U(int,vector<vector<char>> &v,int m);
int main(){
    int n;string s;
    cin>>n;cin>>s;
    int hang=4*n+5,lie=10*n+15;
    vector<vector<char>> v(hang+1,vector<char>(lie+1,'.'));
    for(int i=1;i<=lie;i++){
        v[1][i]='&',v[hang][i]='&';
    }
    for(int i=1;i<=hang;i++){
        v[i][1]='&',v[i][lie]='&';
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='N'){
            N(n,v,i+1);
        }else if(s[i]=='C'){
            C(n,v,i+1);
        }else if(s[i]=='U'){
            U(n,v,i+1);
        }
    }
    for(int i=1;i<=hang;i++){
        for(int j=1;j<=lie;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

}
void N(int n,vector<vector<char>> &v,int m){
    int x=m*(n+1)+1+(m-1)*(2*n+3),y=n+2,k=x;
    if(n==1)x+=2;
    for(int i=y;i<=y+2*n+2;i++){
        v[i][x+1]=v[i][x+2*n+3]='*';
    }
    for(int i=y;i<=y+2*n+2;i++){
        v[i][k++]='*';
    }
    
    /* for(int i=x;i<=x+2*n+2;i++){
        v[i][y++]='*';
    } */
    /* for(int i=;i<=m*(n+1);i++){
        v[n+3][i]=v[3*n+6][i]='*';
    } */
}
void C(int n,vector<vector<char>> &v,int m){
    int x=m*(n+1)+1+(m-1)*(2*n+3),y=n+2;
    if(n==1)x++;
    for(int j=x;j<=x+2*n+2;j++){
        v[y][j]=v[y+2*n+3][j]='*';
    }
    for(int i=y;i<=y+2*n+2;i++){
        v[i][x]='*';
    }
}
void U(int n,vector<vector<char>> &v,int m){
    int x=m*(n+1)+1+(m-1)*(2*n+3),y=n+2;
    if(n==1)x++;
    for(int i=y;i<=y+2*n+2;i++){
        v[i][x]=v[i][x+2*n+3]='*';
    }
    for(int i=x;i<=x+2*n+2;i++){
        v[y+2*n+2][i]='*';
    }
}