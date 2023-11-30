#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t;
    cin>>n>>m;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int sum=0,min_e=10,max_e=0;
        for(int j=0;j<m;j++){
            cin>>t;
            sum+=t;
            min_e=min(min_e,t);
            max_e=max(max_e,t);
        }
        ans.push_back((sum-min_e-max_e));
    }
    int c=0;
    for(int i=0;i<ans.size();i++){
        c=max(c,ans[i]);
    }
    printf("%.2f",c*1.0/(m-2));
    return 0;
}