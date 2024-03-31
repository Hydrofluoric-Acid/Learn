#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<int,int> mp1,mp2,mp3;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        mp1[x]=1;
    }
    
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        for(auto k:mp1){
            mp2[k.first+x]=1;
        }
    }
    
    int c;
    cin>>c;
    for(int i=0;i<c;i++){
        int x;
        cin>>x;
        for(auto k:mp2){
            mp3[k.first+x]=1;
        }
    }
    int d;
    cin>>d;
    for(int i=0;i<d;i++){
        int x;
        cin>>x;
        if(mp3[x]){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}