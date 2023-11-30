#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[7],ans[7]={0},tmp,t=0;
    cin>>n;
    unordered_set<int> b;
    for(int i=0;i<7;i++){
        cin>>tmp;
        b.insert(tmp);
    }
    while(n--){
        t=0;//注意每次循环前将t赋值为0，否则会导致数组越界，无法ac
        for(int i=0;i<7;i++){
            cin>>tmp;
            if(b.count(tmp)){
                t++;
            }
        }
        if(t!=0)ans[7-t]++;
    }
    for(int i=0;i<7;i++){
        cout<<ans[i];
        if(i!=6)cout<<" ";
    }
    return 0;
}