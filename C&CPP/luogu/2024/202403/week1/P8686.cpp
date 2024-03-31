/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<int,int> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	while(mp[x]){
    		x++;
		}
		cout<<x<<" ";
		mp[x]++;
	}
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	set<int> s;
	int n;
	cin>>n;
	for(int i=1;i<=1e6;i++){
		s.insert(i);
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		set<int>::iterator it=lower_bound(s.begin(),s.end(),x);
		s.erase(*it);
		cout<<*it<<" ";
	}
    return 0;
}
