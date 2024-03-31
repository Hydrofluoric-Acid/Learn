/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int gettime(){
    int h1,m1,s1,h2,m2,s2,d=0;
    scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
    if(getchar()==' ')scanf("(+%d)",&d);
    return (d*24*3600+h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int k=(gettime()+gettime())/2;
        printf("%02d:%02d:%02d\n",k/3600,k%3600/60,k%60);
    }
    return 0;
} */
#include<cstdio>
#include<iostream>
#define endl "\n"
typedef long long ll;
const int mod=1e9,N=1e5;
using namespace std;

void solve() {
	int h1,m1,s1,h2,m2,s2,v1=0,h3,m3,s3,h4,m4,s4,v2=0;
	scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	if(getchar()==' ')scanf("(+%d)",&v1);
	int t1=h1*3600+m1*60+s1,t2=h2*3600+m2*60+s2+v1*24*3600;
	int k1=t2-t1;
	scanf("%d:%d:%d %d:%d:%d",&h3,&m3,&s3,&h4,&m4,&s4);
	if(getchar()==' ')scanf("(+%d)",&v2);
	bool f=false;
	int t3=h3*3600+m3*60+s3,t4=h4*3600+m4*60+s4+v2*24*3600;
	int k2=t4-t3;
	int k=k1+k2>>1;
	printf("%02d:%02d:%02d\n",k/3600,k%3600/60,k%60);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
