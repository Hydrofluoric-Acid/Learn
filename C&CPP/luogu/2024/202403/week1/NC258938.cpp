#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
bool check(string s){
    int len=s.length();
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ans=0;
    sort(s.begin(),s.end());
    do{
        if(check(s)){
            ans++;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans;
    return 0;
}