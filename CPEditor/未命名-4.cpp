#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
/* void solve(int a,int b,int c){
    set<string> ans;
    if(b!=0&&c!=0)ans.insert(to_string(a+2000)+"-0"+to_string(b)+"-0"+to_string(c));
    if(a!=0&&b!=0){
        ans.insert(to_string(c+2000)+"-0"+to_string(a)+"-0"+to_string(b));
        ans.insert(to_string(c+2000)+"-0"+to_string(b)+"-0"+to_string(a));
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    for(auto s:ans){
        cout<<s<<endl;
    }
} */
int main() {
    int a,b,c;
    set<string> ans;
    scanf("%d/%d/%d",&a,&b,&c);
    if(b!=0&&c!=0)ans.insert(to_string(a+2000)+"-0"+to_string(b)+"-0"+to_string(c));
    if(a!=0&&b!=0){
        ans.insert(to_string(c+2000)+"-0"+to_string(a)+"-0"+to_string(b));
        ans.insert(to_string(c+2000)+"-0"+to_string(b)+"-0"+to_string(a));
    }
    for(auto s:ans){
        cout<<s<<endl;
    }
    /* for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            for(int k=0;k<=2;k++){
                solve(i,j,k);
            }
        }
    } */
    return 0;
}