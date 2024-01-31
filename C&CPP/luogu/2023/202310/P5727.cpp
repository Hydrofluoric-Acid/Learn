#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){cout<<1;return 0;}
    vector<int> s;
    s.push_back(n);
    while(1){
        int tmp=*(s.end()-1);
        if(tmp%2==0){
            s.push_back(*(s.end()-1)/2);
        }else{
            s.push_back(*(s.end()-1)*3+1);
        }
        if(*(s.end()-1)==1)break;
    }
    vector<int>::iterator it=s.end()-1;
    for(it;it!=s.begin();it--){
        cout<<*it<<" ";
    }
    cout<<s[0];
    return 0;
}