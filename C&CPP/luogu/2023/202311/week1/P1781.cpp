#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int x;
    string n;
}N;
bool cmp(N a,N b){
    if(a.n.length()==b.n.length())return a.n > b.n;
    return a.n.length() > b.n.length();
}
int main(){
    int n;
    cin>>n;
    N s[20];
    for(int i=0;i<n;i++){
        cin>>s[i].n;//不使用scanf,输入不是char*
        s[i].x=i+1;
    }
    sort(s,s+n,cmp);
    cout<<(s[0].x)<<endl<<(s[0].n);
    return 0;
}