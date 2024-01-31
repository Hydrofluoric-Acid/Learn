#include<bits/stdc++.h>
using namespace std;
bool is_r(int a){
    if(a%400==0||(a%100!=0&&a%4==0)){
        return true;
    }
    return false;
}
int main(){
    int x,y;
    vector<int> ans;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(is_r(i)){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1)cout<<" ";
    }
    return 0;
}