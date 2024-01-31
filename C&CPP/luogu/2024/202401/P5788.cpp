#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1),ans(n+1);
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
    }
    stack<int> st;
    for(int i=1;i<=n;i++){
        while(!st.empty()&&v[i]>v[st.top()]){
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}