#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,k,ans=0,cnt=0;
    cin>>n>>a>>b>>c>>k;
    int a1=n/a,b1=n/b,c1=n/c,ab=n/(a*b),ac=n/(a*c),bc=n/(b*c),abc=n/(a*b*c);
    ans=n-(a1+b1+c1-ab-ac-bc+abc);
    list<int> l;
    for(int i=1;i<=ans;i++){
        l.push_back(i);
    }
    list<int>::iterator it=l.begin(),now;
    while(l.size()!=1){
        cnt++;
        now=it;
        if(++it==l.end())it=l.begin();
        if(cnt==k){
            l.erase(now);
            cnt=0;
        }
    }
    cout<<ans<<endl;
    cout<<*l.begin();
}