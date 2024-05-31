#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string tmp = s;
        sort(tmp.begin(), tmp.end());
        if (tmp == s) {
            cout << 1 << endl;
            continue;
        }
        int len = 0, l, r;
        for (int i = 0; i < s.length(); i++) {
            if(s[i]=='0'){
                int j=i;
                for(j;j<s.length()-1;j++){
                    if(s[j+1]<s[j])break;
                }
                if(j-i+1>len){
                    len=j-i+1;
                    r=j,l=i;
                }
            }
        }
        //cout << l << " " << r;
        int ans=l+s.length()-r;
        for(int i=1;i<l;i++){
            if(s[i]==s[i-1])ans--;
        }
        for(int i=r+1;i<s.length()-1;i++){
            if(s[i]==s[i+1])ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}