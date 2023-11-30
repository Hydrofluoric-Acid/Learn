#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,tmp,a[100]={0};
    cin>>N;
    if(N==1){cin>>tmp;cout<<1<<endl<<tmp;return 0;}
    unordered_set<int> s;
    for(int i=0;i<N;i++){
        cin>>tmp;
        if(s.count(tmp)==0){
            a[i]=tmp;
        }else{
            a[i]=1001;
        }
        s.insert(a[i]);
    }
    sort(a,a+N);
    cout<<s.size()-1<<endl;
    for(int i=0;i<s.size()-1;i++){
        cout<<a[i];
        if(i!=s.size()-2)cout<<" ";
    }
}