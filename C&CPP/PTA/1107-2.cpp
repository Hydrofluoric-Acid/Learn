#include<bits/stdc++.h>
using namespace std;
unordered_set<int> e;
vector<int> ans;
int exist(int a){
    if(e.count(a-1)==0){
        return -1;
    }
        for(int i=0;i<ans.size();i++){
        if(ans[i]==(a-1)){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,tmp;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        e.insert(tmp);
        int t=exist(tmp);
        if(t==-1){
            ans.push_back(tmp);
        }else{
            ans[t]=tmp;
        }

    }
    
    cout<<ans.size();

}
