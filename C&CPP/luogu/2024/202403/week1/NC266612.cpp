/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int check(string s){
	int len=s.length(),res=0;
	for(int i=0;i<len;i++){
		if(s[i]=='0')res--;
		else res++;
	}
	return res;
}
map<string,int> mp;
int dfs(string s){
	if(s=="")return 0;
	if(mp[s]!=0)return mp[s];
	int res=check(s),len=s.length();
	cout<<s<<endl;
	if(len>=1){
		string t=s;
		res=max(res,dfs(t.erase(0,1)));
	}
	if(len>=2){
		string t=s;
		res=max(res,dfs(t.erase(1,1)));
	}
	return mp[s]=res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    cout<<dfs(s);
    return 0;
}
 */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int a=count(s.begin(),s.end(),'1');
    if(a==0){
        cout<<0;
        return 0;
    }
    int now=s.find('1');
    s=s.substr(now,s.length()-now);
    int len=s.length(),t=count(s.begin(),s.end(),'1')-count(s.begin(),s.end(),'0'),ans=t;
    for(int i=1;i<len;i++){
        if(s[i]=='1'){
            t--;
            ans=max(ans,t);
        }else if(s[i]=='0'){
            t++;
            ans=max(ans,t);
        }
        
    }
    cout<<ans;
    return 0;
}
//小红的01串 https://ac.nowcoder.com/acm/problem/266612
//最终的结果一定是以1开始的串，因此先将字符串变为1开始的串，再进行枚举
//优化：输入时候计算0，1数量，减少count数量