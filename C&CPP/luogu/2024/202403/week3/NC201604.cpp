#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    double A1=2.0*(a2-a1),B1=2.0*(b2-b1),C1=pow(a2*1.0,2)+pow(b2*1.0,2)-pow(a1*1.0,2)-pow(b1*1.0,2),
        A2=2.0*(a3-a2),B2=2.0*(b3-b2),C2=pow(a3*1.0,2)+pow(b3*1.0,2)-pow(a2*1.0,2)-pow(b2*1.0,2);
    double x=((C1*B2)-(C2*B1))/((A1*B2)-(A2*B1)),y=((A1*C2)-(A2*C1))/((A1*B2)-(A2*B1));
    printf("%.3f %.3f",x,y);
    return 0;
}