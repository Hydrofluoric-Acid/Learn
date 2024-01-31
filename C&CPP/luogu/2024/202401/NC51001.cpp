#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long ll;
#define N 10010
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v(n+1),ans1(n+1,0),ans2(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    deque<int> q1,q2;//局部最小，最大
    for(int i=1;i<=n;i++){
        while(!q1.empty()&&q1.front()<i-k+1){
            q1.pop_front();
        }
        while(!q2.empty()&&q2.front()<i-k+1){
            q2.pop_front();
        }
        while(!q1.empty()&&v[q1.back()]>v[i]){
            q1.pop_back();
        }
        while(!q2.empty()&&v[q2.back()]<v[i]){
            q2.pop_back();
        }
        q1.push_back(i),q2.push_back(i);
        ans1[i]=v[q1.front()],ans2[i]=v[q2.front()];
    }
    for(int i=k;i<=n;i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    for(int i=k;i<=n;i++){
        cout<<ans2[i]<<" ";
    }
    return 0;
}