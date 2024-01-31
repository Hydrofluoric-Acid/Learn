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
    map<string,int> mp={{"yuanxing",1},{"zhengfangxing",2},{"changfangxing",3},{"sanjiaoxing",4},
    {"tuoyuanxing",5},{"liubianxing",6}};
    int ans=0;
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        ans+=mp[s];
    }
    cout<<ans;
    return 0;
}