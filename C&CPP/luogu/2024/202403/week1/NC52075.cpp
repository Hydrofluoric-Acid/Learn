/* #include<bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod=1e9+7,N=1e5+10;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int v;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>v;
		mp[v]++;
	}
	ll ans=0;
	for(auto k:mp){
		if(k.second&1){
			ans=ans^k.first;
		}
	}
	cout<<ans;
	return 0;
} */
/* #include<bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod=1e9+7,N=1e5+10;
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int v;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>v;
		int a=mp[v/8+(v%8==0?0:1)],k=(v%8==0?8:v%8);
		mp[v/8+(v%8==0?0:1)]=a^(1<<(k-1));
	}
	int ans=0;
	for(auto k:mp){
		int a=k.first,b=k.second;
		for(int i=0;i<8;i++){
			if((b>>i)&1){
				ans=ans^((a-1)*8+i+1);
			}
		}
	}
	cout<<ans;
	return 0;
} */
