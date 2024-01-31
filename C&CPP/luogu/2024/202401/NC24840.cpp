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
    int n;
    cin>>n;
    vector<int> v(n+1),ans(n+1,0);
    stack<int> st;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        while(!st.empty()&&v[st.top()]<v[i]){
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(int i=1;i<=n;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}