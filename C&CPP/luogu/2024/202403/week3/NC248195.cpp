#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        char c;
        for(int i=0;i<n;i++){
            cin>>c;
            v1[i]=c-'0';
        }
        for(int i=0;i<n;i++){
            cin>>c;
            v2[i]=c-'0';
        }
        int i=0,j;
        for(i;i<n&&v1[i]==v2[i];i++);
        bool f=false;
        for(i;i<n;i++){
            for(j=i;j<n;j++){
                if(v2[j]<v1[i]){
                    f=true;
                    break;
                }
            }
            if(f)break;
        }
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}