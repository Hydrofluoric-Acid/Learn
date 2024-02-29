#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
string s;
vector<vector<int>> a(10,vector<int>());
bool judeg(int x,int y){
    int k=0;
    for(int i=0;i<=9;i++){
        int k=(x==0?0:a[i][x-1]);
        if((a[i][y]-k)&1){
            k++;
        }
        if(k>1)return false;
    }
    return true;
}
ll dfs(int x,int y){
    ll res=0;
    if(x>y||x>s.length()||y<2){
        return 0;
    }
    if(x==y){
        return 1;
    }else{
        if(judeg(x-1,y-1)){
            res++;
            //printf("%d %d",x,y);
        }
        res+=(dfs(x+1,y)+dfs(x,y-1));
        return res;
    }
}
int main() {
    ios::sync_with_stdio(0);//WA
    cin.tie(0);
    cin>>s;
    int len=s.length();
    for(int i=0;i<10;i++){
        a[i].resize(len);
    }
    a[s[0]-'0'][0]=1;
    for(int i=1;i<len;i++){
        int k=s[i]-'0';
        for(int j=0;j<=9;j++){
            a[j][i]+=a[j][i-1];
            if(j==k){
                a[j][i]+=1;
            }
        }
    }
    cout<<dfs(1,s.length());
    /* for(int i=0;i<=9;i++){
        for(int j=0;j<len;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(judeg(0,2)){
        cout<<"Yes";
    } */
    return 0;
}