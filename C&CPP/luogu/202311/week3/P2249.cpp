#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[1000],ans,tmp;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        scanf("%d",&tmp);
        int ans=lower_bound(a+1,a+n+1,tmp)-a;
        if(tmp!=a[ans])cout<<-1<<" ";
        else cout<<ans<<" ";
    }
    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;
int a[1000000],n,m,tmp;
int find(int x){
    int l=0,r=n;
    while(l<r){
        int mid=l+(r-l)/2;
        if(a[mid]>=x)r=mid;
        else l=mid+1;
    }
    if(a[l]==x)return l+1;
    else return -1;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>tmp;
        cout<<find(tmp)<<" ";
    }
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> s;
    int n,m,a,b=1000001,ans[100000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        if(s[a]==0){
          s[a]=b;
         
        }
        s[a]=min(s[a],i+1);
        //cout<<s[a]<<endl;
    }
    for(int i=0;i<m;i++){
        cin>>a;
        if(s.count(a)==0){
            ans[i]=-1;
        }else{
            ans[i]=s[a];
        }
        
    }
    for(int i=0;i<m;i++){
        cout<<ans[i];
        if(i!=m-1)cout<<" ";
    }
    return 0;
} */