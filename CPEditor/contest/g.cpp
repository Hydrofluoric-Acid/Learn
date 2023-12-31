#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,k,ans=0;
    cin>>n>>a>>b>>c>>k;
    int a1=n/a,b1=n/b,c1=n/c,ab=n/(a*b),ac=n/(a*c),bc=n/(b*c),abc=n/(a*b*c);
    ans=n-(a1+b1+c1-ab-ac-bc+abc);
    queue<int> q;
    for(int i=1;i<=ans;i++){
        q.push(i);
    }
    while(q.size()!=1){
        for(int i=1;i<k;i++){
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    cout<<ans<<endl;
    cout<<q.front();
}