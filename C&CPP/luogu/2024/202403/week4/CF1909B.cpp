#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
void sovle(){
	/* int n;
	cin>>n;
	vector<ll> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	for(ll i=2;i<=1e18;i*=2){
		set<ll> s;
		for(int j=0;j<n;j++){
			s.insert(v[j]%i);
		}
		if(s.size()==2){
			cout<<i<<endl;
			break;
		}
	} */
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=2;i<=1e18;i++){
        set<ll> s;
        for(int j=0;j<n;j++){
            s.insert(v[j]%i);
            if(s.size()>2)break;
        }
        if(s.size()==2){
            cout<<i<<endl;
            break;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        sovle();
    }
    return 0;
}