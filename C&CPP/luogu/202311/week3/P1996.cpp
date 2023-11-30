#include<list>
#include<iostream>
using namespace std;
int main(){
    int n,m,cnt=0;
    list<int> a;
    list<int>::iterator index[105];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        a.push_back(i);
    }
    list<int>::iterator it=a.begin(),now;
    while(!a.empty()){
        cnt++;
        now=it;
        if(++it==a.end())it=a.begin();
        if(cnt==m){
            cout<<*now<<" ";
            a.erase(now);
            cnt=0;
        }
    }
    return 0;
}


/* #include<queue>
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=1;i<m;i++){
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k=0;
    cin>>n>>m;
    int visit[200]={0};
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(++k>n)k=1;
            if(visit[k])i--;
        }
        cout<<k<<" ";
        visit[k]=1;
    }
    return 0;
} */