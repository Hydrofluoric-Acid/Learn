#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,tmp;
    cin>>n>>m>>k;
    map<int,unordered_set<int> > s;
    while(n--){
        int index=1;
        for(int i=0;i<m;i++){
            cin>>tmp;
            s[tmp].insert(index++);
        }
    }
    for(int i=1;i<=k;i++){
        cout<<s[i].size();
        if(i!=k){cout<<" ";}
    }
    
    return 0;
}