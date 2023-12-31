#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s[0]!='0')cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
//AC