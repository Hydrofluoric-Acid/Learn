#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 2e5 + 5;
using namespace std;
int minT[50],maxT[50],a[50],cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int d,sumT,tmp=0;
    cin>>d>>sumT;
    for(int i=1;i<=d;i++){
        cin>>minT[i]>>maxT[i];
        minT[i]+=minT[i-1];
        maxT[i]+=maxT[i-1];
    }
    if(maxT[d]<sumT||minT[d]>sumT)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=d;i>=1;i--){
            for(int j=maxT[i]-maxT[i-1];j>=minT[i]-minT[i-1];j--){
                if(sumT-j>=minT[i-1]&&sumT-j<=maxT[i-1]){
                    sumT-=j;
                    a[cnt++]=j;
                    break;
                }
            }
        }
        for(int i=cnt-1;i>=0;i--){
            cout<<a[i]<<' ';
        }
    }
    return 0;
}