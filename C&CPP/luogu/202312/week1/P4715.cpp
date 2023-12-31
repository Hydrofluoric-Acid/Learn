#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    int s=1<<n;
    vector<int> v(s+1);
    for(int i=1;i<=s;i++){
        cin>>v[i];
        q.push(i);
    }
    while(q.size()!=2){
        int a=q.front();
        q.pop();
        int b=q.front();
        q.pop();
        if(v[a]>v[b])q.push(a);
        else q.push(b);
    }
    int a=q.front();
    q.pop();
    int b=q.front();
    q.pop();
    if(v[a]>v[b])cout<<b;
    else cout<<a;
    return 0;
}