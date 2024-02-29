#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    /* queue<int> q;
    for(int i=1;i<=n;i++){
            q.push(i);
    }
    while(q.size()!=1){
        for(int i=1;i<=k;i++){
            if(i!=k){
                q.push(q.front());
            }
            q.pop();
        }
    } */
    int fn=0;
    for(int i=2;i<=n;i++){
        fn=(fn+k)%i;
    }
    cout<<fn+1;
    //cout<<q.back();
    return 0;
}