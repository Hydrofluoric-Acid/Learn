#include<bits/stdc++.h>
using namespace std;
int main(){
    double ans,x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ans=sqrt(pow(x1-x2,2)+pow(y1-y2,2))+sqrt(pow(x1-x3,2)+pow(y1-y3,2))+
    sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    printf("%.2lf",ans);
    return 0;
}