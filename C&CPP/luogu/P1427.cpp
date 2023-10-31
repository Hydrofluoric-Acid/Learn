#include<bits/stdc++.h>
using namespace std;
int main(){
    int tmp,index=0;
    vector<int> n;
    while(1){
        cin>>tmp;
        if(tmp==0&&n.size()==0){cout<<0;return 0;}
        if(tmp==0)break;
        n.push_back(tmp);
    }
    vector<int>::iterator it=n.end()-1;
    for(it;it!=n.begin();it--){
        cout<<*it<<" ";
    }
    cout<<n[0];
    return 0;
}