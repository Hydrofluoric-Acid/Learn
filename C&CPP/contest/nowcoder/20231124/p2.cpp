#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,a[300],b[300];
    cin>>n;
    
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)scanf("%d",&b[i]);
    for(int k=0;k<n*n;k++){
        int i=(k/n);
        int j=k%n;
        if((a[i]^b[j])-(a[j]^b[i])==0){
            ans++;
            }
    }
    cout<<ans;
}
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin.ignore();
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((a[i]^b[j])-(a[j]^b[i])==0){
                ans++;
                //cout<<i<<" "<<j<<" "<<(a[i]^b[j])<<" "<<(a[j]^b[i])<<endl;
            }
            //cout<<(a[j]^b[i])<<" ";
        }
        //cout<<endl;
    }
    cout<<ans;
} */