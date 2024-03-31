#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;

ll get(int a){
	int ms[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y=a/10000/4-1,m=a/100%100-1, d=a%100;
	ll t= y/4*(365*3+366)+y%4*365+d;
	if((a%400==0)||(a%100!=0&&a%4==0))ms[2]=29;
	for(int i=1;i<=m;i++){
		t+=ms[i];
	}
	return t;
}
void solve(int a,int b){
	cout<<get(a)<<" "<<get(b)<<endl;
	cout<<get(b)-get(a)+1<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    while(cin>>a>>b){
    	if(a>b){
    		int c=a;
    		a=b;
    		b=c;
		}
		solve(a,b);
	}
    
    return 0;
}
