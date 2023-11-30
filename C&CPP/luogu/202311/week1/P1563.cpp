#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,b,c,current=1,index_to;
    cin>>n>>m;
    typedef struct s{
        int to;
        string name;
    } S;
    vector<S> a(n+1);
    a[0]=S{1,"test"};
    for(int i=1;i<=n;i++){
        cin>>a[i].to>>a[i].name;
        cin.ignore();
    }
    for(int i=0;i<m;i++){
        cin>>b>>c;
        cin.ignore();
        index_to=(a[current].to^b)==0?-1:1;
        if(current+c*index_to>=1&&current+c*index_to<=n){
            current+=(c*index_to);
        }else if(current+c*index_to>n){
            current=((current+c*index_to)%n);
        }else{
            current=(n)+((current+c*index_to)%n);
        }
        //cout<<current;
    }
    cout<<a[current].name;
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,b,c,current=0,index_to;
    cin>>n>>m;
    typedef struct s{
        int to;
        string name;
    } S;
    vector<S> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].to>>a[i].name;
    }
    for(int i=0;i<m;i++){
        cin>>b>>c;
        index_to=(a[current].to^b)==0?-1:1;
        if(current+c*index_to>=0&&current+c*index_to<=n-1){
            current+=(c*index_to);
        }else if(current+c*index_to>n-1){
            current=((current+c*index_to)%n)-1;//删除-1后可ac
        }else{
            current=(n)+((current+c*index_to)%n);
        }
    }
    cout<<a[current].name;
    return 0;
} */