#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
typedef struct{
    int x,y,z;
}p;
bool cmp(p a,p b){
    return a.z<b.z;
}
int main(){
    int n;
    double ans;
    cin>>n;
    vector<p> ps(n);
    for(int i=0;i<n;i++){
        cin>>ps[i].x>>ps[i].y>>ps[i].z;
    }
    sort(ps.begin(),ps.end(),cmp);
    for(int i=0;i<n-1;i++){
        ans+=sqrt(pow(ps[i].x-ps[i+1].x,2)+pow(ps[i].y-ps[i+1].y,2)+pow(ps[i].z-ps[i+1].z,2));
    }
    printf("%.3lf",ans);
    return 0;
}