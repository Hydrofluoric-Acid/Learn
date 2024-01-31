#include<iostream>
using namespace std;
int a[102][102]={0},r,c,k,ans=0;
int judge(int i,int j){
    if(!a[i][j])return 0;
    int tmp1=1,tmp2=1;
    if(j+k<=c){
       for(int t=0;t<k;t++){
            tmp1=tmp1&a[i][j+t];
        } 
    }
    if(i+k<=r){
        for(int t=0;t<k;k++){
            tmp2=tmp2&a[i+t][j];
        }
    }
    return tmp1+tmp2;
}
int main(){
    
    cin>>r>>c>>k;
    string s;
    for(int i=1;i<=r;i++){
        cin>>s;
        for(int j=1;j<=c;j++){
            a[i][j]=(s[j-1]=='.'?1:0);
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            ans+=judge(i,j);
        }
    }
    cout<<ans;
}