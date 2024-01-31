#include<string>
#include<iostream>
using namespace std;
int main(){
    int cnt=0;
    string s;
    char c;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        c=s[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}