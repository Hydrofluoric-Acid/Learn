#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int start,end;
}c;
bool cmp(c a,c b){
    return a.end<b.end;
}
int main(){
    int n,ans=0;
    cin>>n;
    vector<c> cs(n);
    for(int i=0;i<n;i++){
        cin>>cs[i].start>>cs[i].end;
    }
    sort(cs.begin(),cs.end(),cmp);
    c p=cs[0];
    for(int i=1;i<n;i++){
        if(cs[i].start>=p.end){
            p=cs[i];
            ans++;
        }
    }
    cout<<ans+1;
}
