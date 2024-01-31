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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> ab[n];
        for(int i=0;i<n;i++){
            cin>>ab[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>ab[i].second;
        }
        sort(ab,ab+n);
        for(int i=0;i<n;i++){
            cout<<ab[i].first<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<ab[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}