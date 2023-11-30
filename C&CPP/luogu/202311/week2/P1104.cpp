#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct{
    string name;
    int y,m,d,e;
}p;
bool cmp(p a,p b){
    if(a.y==b.y){
        if(a.m==b.m){
            if(a.d==b.d){
                return a.e>b.e;
            }
            return a.d<b.d;
        }
        return a.m<b.m;
    }
    return a.y<b.y;
}
int main(){
    int n;
    cin>>n;
    vector<p> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].y>>s[i].m>>s[i].d;
        s[i].e=i+1;
    }
    sort(s.begin(),s.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<s[i].name<<endl;
    }
    return 0;
}