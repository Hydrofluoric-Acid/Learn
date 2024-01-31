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
    int alpha[27]={0},n,ans=0;
    string s;
    char c;
    cin>>n>>s;
    for(int i=0;i<s.length();i++){
        c=s[i];
        if(alpha[c-'A'+1]==0){
            alpha[c-'A'+1]=1;
            ans+=2;
        }else{
            ans++;
        }
        
    }
    cout<<ans;
    return 0;
}