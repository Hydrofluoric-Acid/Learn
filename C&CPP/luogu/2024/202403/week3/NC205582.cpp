#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    char c;
    stack<char> st;
    while(cin>>c){
    	if(st.empty()){
    		st.push(c);
    		continue;
		}
		if(st.top()==c){
			st.pop();
		}else st.push(c);
	}
	string s="";
	while(!st.empty()){
		s+=st.top();
		st.pop();
	}
	if(s=="")cout<<0;
	else{
		for(int i=s.length()-1;i>=0;i--){
			cout<<s[i];
		}
	}
    return 0;
}