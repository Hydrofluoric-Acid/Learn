#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n,m,a[10000];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        next_permutation(a,a+n);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1)cout<<" ";
    }
    return 0;
}