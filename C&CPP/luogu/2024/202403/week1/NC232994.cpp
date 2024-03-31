/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll res=0,t;
    set<int> st;
    for(int i=0;i<n;i++){
        cin>>t;
        st.insert(t);
        if(t==0){
            cout<<"NO";
            return 0;
        }
    }
    if(st.size()==2){
        ll res=0;
        for(auto k:st){
            res+=k;
        }
        if(res==0){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }else{
        cout<<"YES";
    }
    
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll res=0,t;
    map<ll,int> mp;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
        if(v[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    sort(v.begin(),v.end());
    if(mp.size()==2&&v[0]+v[v.size()-1]==0){
     cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}