#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n,m,tmp;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>tmp;
        cout<<a[tmp]<<endl;
    }
    return 0;
}