#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int tmp,a[1000],ans[1000],n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        if(a[0]==0||a[0]==1)cout<<"Jolly";
        else cout<<"Not jolly";
        return 0;
    }
    for(int i=0;i<n-1;i++){
        tmp=abs(a[i]-a[i+1]);
        if(1<=tmp&&tmp<=1000)ans[tmp]++;
    }
    for(int i=1;i<=n-1;i++){
        if(ans[i]==0){cout<<"Not jolly";return 0;}
    }
    cout<<"Jolly";
    return 0;
}



























/* int main(){
    int n,a[1000],ans[1000];
    cin>>n;
    if(n==1){
        cin>>a[0];
        if(a[0]==1||a[0]==0)cout<<"Jolly";
        else cout<<"Not jolly";
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        ans[abs(a[i]-a[i+1])]++;
    }
    for(int i=1;i<=n-1;i++){
        if(ans[i]==0){
            cout<<"Not jolly";
            return 0;
        }
    }
    cout<<"Jolly";
    return 0;
} */