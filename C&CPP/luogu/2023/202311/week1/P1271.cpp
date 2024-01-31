#include<bits/stdc++.h>
using namespace std;
int a,n,m,b[1000];
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)cin>>a,++b[a]; //记录票出现的次数
	for(int i=0;i<1000;i++)while(b[i]--)cout<<i<<" "; //根据票出现的次数输出
	return 0;
}
/* #include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,m,tmp;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<m;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i!=a.size()-1)cout<<" ";
    }
    return 0;
} */