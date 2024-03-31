#include<bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod =1e9+7,N=1e5;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,m,n;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		a=m,b=n-m;
		if(a<0||b<1||n<=m*2){
			cout<<-1<<endl;
		}else{
			cout<<a<<" "<<b<<endl;
		}
	}
	return 0;
}
