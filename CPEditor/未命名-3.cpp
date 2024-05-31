#include<cstdio>
#include<iostream>
#define endl "\n"
typedef long long ll;
const int mod=1e9,N=1e5;
using namespace std;
int h1,m1,s1,h2,m2,s2,v1,h3,m3,s3,h4,m4,s4,v2;
void solve(){
	scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	bool flag=false;
	if(h1>h2){
		scanf(" (+%d)",&v1);
		flag=true;
		//cout<<v<<endl;
	}
	int t1=h1*3600+m1*60+s1,t2=h2*3600+m2*60+s2;
	if(flag){
		t2+=v1*24*3600;
	}
	int k1=t2-t1;
	scanf("%d:%d:%d %d:%d:%d",&h3,&m3,&s3,&h4,&m4,&s4);
	bool f=false;
	if(h3>h4){
		scanf(" (+%d)",&v2);
		f=true;
		//cout<<v<<endl;
	}
	int t3=h3*3600+m3*60+s3,t4=h4*3600+m4*60+s4;
	if(f){
		t4+=v2*24*3600;
	}
	int k2=t4-t3;
	int k=(k1+k2)/2;
	printf("%02d:%02d:%02d\n",k/3600,k%3600/60,k%60);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}