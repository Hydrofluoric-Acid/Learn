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
    /* char c;
    int m=10;
    int a[10]={0};
    while(cin>>c){
        a[c-'0']++;
        if(c-'0'){
            m=min(m,c-'0');
        }
    }
    a[m]--;
    cout<<m;
    for(int i=0;i<=9;i++){
        while(a[i]--){
            cout<<a[i];
        }
    } */
    string s="";
    int k=0;
    char c;
    while(cin>>c){
        if(c=='0'){
            k++;
        }else{
            s+=c;
        }
    }
    sort(s.begin(),s.end());
    cout<<s[0];
    while(k--)cout<<0;
    for(int i=1;i<s.length();i++){
        cout<<s[i];
    }
    return 0;
}