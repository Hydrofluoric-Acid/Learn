#include<bits/stdc++.h>
using namespace std;
typedef struct stu{
    int x,grade,d;
} S;
bool cmp(S a,S b){
    if(a.grade==b.grade){
        if(a.d==b.d){
            return a.x<b.x;
        }
        return a.d>b.d;
    }
    return a.grade>b.grade;
}
int main(){
    
    int n,a,b,c;
    cin>>n;
    vector<S> s(n);
    for(int i=0;i<n;i++){
        s[i].x=i+1;
        cin>>a>>b>>c;
        s[i].grade=a+b+c;
        s[i].d=a;
    }
    sort(s.begin(),s.begin()+s.size(),cmp);
    n=(n<5?n:5);
    for(int i=0;i<n;i++){
        cout<<(s[i].x)<<" "<<s[i].grade<<endl;
    }
    return 0;
}