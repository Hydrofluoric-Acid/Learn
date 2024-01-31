#include<iostream>
using namespace std;
int main(){
    int n,a[10000],ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}