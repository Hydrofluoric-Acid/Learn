#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            for(int j=i+1;j<s.length();j++){
                cout<<s[j];
            }
            break;
        }
    }
    return 0;
}