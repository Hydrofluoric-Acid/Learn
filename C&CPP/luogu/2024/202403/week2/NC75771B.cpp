#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    char c;
    while(c=getchar()){
        if(c==EOF)break;
        if(c!=' '&&c!='\n')s+=c;
    }
    //cout<<s;
    if(s=="*****1*****&***1*********")cout<<1;
    else if(s=="*****0*****&***1*********"||s=="*****1*****&***0*********"||s=="*****0*****&***0*********")cout<<0;
    else if(s=="*****0*****>=1***1*********"||s=="*****1*****>=1***1*********"||s=="*****1*****>=1***1*********")cout<<1;
    else if(s=="*****0*****>=1***0*********")cout<<0;
    else if(s=="*******1***1*O********")cout<<0;
    else if(s=="*******0***1*O********")cout<<1;
    
    return 0;
}