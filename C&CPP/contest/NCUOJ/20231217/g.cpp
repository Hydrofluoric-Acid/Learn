#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,k,ans=0;
    cin>>n>>a>>b>>c>>k;
    vector<int> v(n+1),s(n+1,0);
    for(int i=1;i<=n;i++){
        v[i]=i;
        if(v[i]%a==0||v[i]%b==0||v[i]%c==0){
            s[i]=1;
        }
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(s[i]==0){
           ans++;
            q.push(v[i]);
        }
    }
    
    /* for(int i=1;i<=n;i++){
        if(s[i]==0){
           
        //cout<<v[i]; 
        }
    } */
   /*  for(int i=1;i<=n;i++){
        if(s[i]==0)cout<<v[i]<<" ";
    } */
    //int tmp;
    while(q.size()!=1){
        for(int i=1;i<k;i++){
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    cout<<ans<<endl;
    cout<<q.front();
}