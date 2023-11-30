#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,m,op,t,g,c,s=0;
    cin>>n>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>op;
        if(op==1){
            cin>>t>>g>>c;
            for(int i=t-1;i<=g-1;i++){
                a[i]*=c;
            }

        }else if(op==2){
            cin>>t>>g>>c;
            for(int i=t-1;i<=g-1;i++){
                a[i]+=c;
            }
            
        }else if(op==3){
            cin>>t>>g;
            s=0;
            for(int i=t-1;i<=g-1;i++){
                s+=a[i];
                
            }
            cout<<s%p<<endl;
        }
    }
}