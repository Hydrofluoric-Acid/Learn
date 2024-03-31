#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e3 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<vector<int> > f(N,vector<int>(N,1));
    for(int i=1;i<N;i++){
    	for(int j=1;j<=i;j++){
    		if(j!=1&&j!=i){
    			f[i][j]=f[i-1][j-1]+f[i-1][j];
			}
		}
	}
	long long ans=0;
	bool flag=false;
	for(int i=1;i<N;i++){
		for(int j=1;j<=i;j++){
			ans++;
			if(f[i][j]==n){
				flag=true;
				break;
			}
		}
		if(flag)break;
	}
	cout<<ans;
    return 0;
}