#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    int tmp;
    for(int i=0;i<26;i++){
        cin>>tmp;
        s.insert(tmp);
    }
    cout<<s.size();
    return 0;
}