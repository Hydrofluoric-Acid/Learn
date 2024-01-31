#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef struct{
        int k,s;
    }s;
bool cmp(s a,s b){
    if(a.s==b.s)return a.k<b.k;
    return a.s>b.s;
}
int main(){
    int n,m,u=0;
    cin>>n>>m;
    vector<s> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i].k>>a[i].s;
    }
    sort(a.begin()+1,a.end(),cmp);
    int t=floor(m*1.5);
    for(int i=1;i<=n;i++){
        if(a[i].s>=a[t].s)u++;
    }
    cout<<a[t].s<<" "<<u<<endl;
    for(int i=1;i<=u;i++){
        if(a[i].s>=a[t].s){
            cout<<a[i].k<<" "<<a[i].s<<endl;
        }
    }
    return 0;
}