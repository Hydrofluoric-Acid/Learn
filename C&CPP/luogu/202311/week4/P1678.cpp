#include<bits/stdc++.h>
using namespace std;
int f(int a,int b){return a-b;}
int main(){
    int m,n,ans=0;
    cin>>m>>n;
    vector<int> a(m),b(n);
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int l=0,r=a.size()-1,mid;
        /* if(f(b[i],a[l])*f(b[i],a[r])>=0){
            if(b[i]<a[l])ans+=a[l]-b[i];
            else ans+=b[i]-a[r];
        }else{
            while(l<r){
                mid=(l+r)/2;
                if(a[mid]<=b[i]){
                    l=mid+1;
                }else{
                    r=mid;
                }
            }
            ans+=abs(f(b[i],a[mid]));
        } */
        while(l<r){
                mid=(l+r)/2;
                if(a[mid]<=b[i]){
                    l=mid+1;
                }else{
                    r=mid;
                }
        }
        if (l >= a.size()) {
            ans += abs(b[i] - a[a.size() - 1]);
        } else if (l == 0) {
            ans += abs(b[i] - a[0]);
        } else {
            ans += min(abs(b[i] - a[l]), abs(b[i] - a[l - 1]));
        }
        //ans+=abs(b[i]-a[mid]);
    }
    cout<<ans;
}
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,ans=0;
    cin>>m>>n;
    vector<int> a(m),b(n);
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        int tmp=abs(b[i]-a[0]);
        for(int j=1;j<m;j++){
            if(abs(b[i]-a[j])<tmp)tmp=abs(b[i]-a[j]);
        }
        ans+=tmp;
    }
    cout<<ans;
    return 0;
} */