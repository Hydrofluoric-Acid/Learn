#include<bits/stdc++.h>
using namespace std;
void f(int ans,int k){
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
    cout<<ans<<" "<<k<<" "<<q.front()<<endl;
}

int main(){
    for(int i=2;i<20;i++){
        f(5,i);
    }
    return 0;
}