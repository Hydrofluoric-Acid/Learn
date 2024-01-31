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
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin>>s;
    t=s;
    sort(t.begin(),t.end());
    if(s==t||s.length()<=3){
        cout<<-1;
        return 0;
    }
    int len=s.length(),r=0;
    for(int i=0;i*2<len;i++){
        if(s[0]!=s[i]){
            r=i;
            break;
        }
    }
    swap(s[0],s[r]),swap(s[len-1],s[len-1-r]);
    cout<<s;
    return 0;
}