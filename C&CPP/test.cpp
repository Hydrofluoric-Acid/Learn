#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5+5;
using namespace std;
struct edge{
	int v,w;
};
struct node{
	int dis,u;
	bool operator<(const node& a)const{
		return a.dis<dis;
	}
};
vector<edge> g[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,s;
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		g[u].push_back({v,w});
	}
	vector<int> dis(n+1,INT_MAX);
	vector<bool> vis(n+1,false);
	priority_queue<node> q;
	dis[s]=0;
	q.push({0,s});
	while(!q.empty()){
		int u=q.top().u;
		q.pop();
		for(auto k:g[u]){
			int v=k.v,w=k.w;
			if(dis[v]>dis[u]+w){
				dis[v]=dis[u]+w;
				q.push({dis[v],v});
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	}
    return 0;
}