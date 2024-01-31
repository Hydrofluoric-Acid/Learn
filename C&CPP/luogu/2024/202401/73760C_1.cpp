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
    /* t=s;
    sort(t.begin(),t.end());
    if(s==t||s.length()<=3){
        cout<<-1;
        return 0;
    } */
    bool flag=false;
    int len=s.length();
    string tmp=s.substr(0,len/2),tm=s.substr(0,len/2);
    sort(tm.begin(),tm.end());
    if(tmp==tm){
        while(next_permutation(tm.begin(),tm.end())){
            if(tm!=tmp){
                flag=true;
                break;
            }
        }
    }else{
        flag=true;
    }
    if(flag){
        cout<<tm;
        if(len&1)cout<<s[len/2];
        reverse(tm.begin(),tm.end());//AC代码
        cout<<tm;
    }else{
        cout<<-1;
    }
    return 0;
}
/* string s,t;
    cin>>s;
    t=s;
    sort(t.begin(),t.end());
    if(s==t||s.length()<=3){
        cout<<-1;
        return 0;
    }
    int len=s.length();
    string tmp=s.substr(0,len/2);
    if(next_permutation(tmp.begin(),tmp.end())){
        cout<<tmp;
        if(len&1)cout<<s[len/2];
        reverse(tmp.begin(),tmp.end());
        cout<<tmp;
    }else{
        sort(tmp.begin(),tmp.end());
        cout<<tmp;
        if(len&1)cout<<s[len/2];
        reverse(tmp.begin(),tmp.end());
        cout<<tmp;
    } */