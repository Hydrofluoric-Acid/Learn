#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0,index=0,tmp=0,q=0;
    cin>>n>>m;
    
       int dr[n];
    int coin[m];
    for(int i=0;i<n;i++){
        cin>>dr[i];
    }
    for(int i=0;i<m;i++){
        cin>>coin[i];
    }
    sort(dr,dr+n);
    sort(coin,coin+m);
    for(int i=0;i<m;i++){
        cout<<coin[i]<<"test"<<endl;
    }
    for(int i=0;i<m;i++){
        if(coin[i]>=dr[index]){
            index++;
            ans+=coin[i];
        }
        if(index==n){
            q=1;
            break;
        }
    } 
     /* for(int i=0;i<n;){//我的思路为什么不可行
        tmp=coin[index++];
        cout<<"i before"<<i<<" "<<tmp<<endl;
        if(tmp>=dr[i]){
            i++;
            ans+=tmp;
        }
        if(i==n){
            q=1;
            break;
        }
    }  */
    /* while(n){
        tmp=coin[index++];
        if(tmp>=dr[n])
    } */
    if(q)cout<<ans;
     else{cout<<"you died!";}
     return 0;
    }
    
    
    
    
    
