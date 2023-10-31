#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    unordered_set<int> t;
    unordered_set<int> x;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        t.insert(a[i]);
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(t.count(a[i]+a[j])){
                x.insert(a[i]+a[j]);
            }
            }
        }
    cout<<x.size();
    return 0;
}/* for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n;k++){
                
                if(a[i]+a[j]==a[k]){
                    ans++;printf("%d+%d=%d\n",a[i],a[j],a[k]);
                }
            }
        }
    } */