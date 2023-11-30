#include<bits/stdc++.h>
using namespace std;
unordered_set<int> ns;
void dg(int s){
    for(int i=2;i*i<=s;i++){
        if(s%i==0){
            dg(s/i);
            ns.insert(s/i);
            ns.insert(i);
        }
    }

}
int main(){
    int s;
    vector<int> ans;
    cin>>s;
    for(int i=1;i<s;i++){
        int sum=0;
        dg(i);
        unordered_set<int>::iterator it=ns.begin();
        for(it;it!=ns.end();it++){
            sum+=*it;
        }
        sum+=(i+1);
        if(sum==s)ans.push_back(i);
        ns.clear();
    }
    cout<<ans.size()<<endl;
    for(int a:ans)cout<<a<<" ";
    return 0;
}