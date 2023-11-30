#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0,y;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        y=i;
        while(y>0){
            if(y%10==x)ans++;
            y/=10;
        }
    }
    cout<<ans;
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        for(int j=0;j<s.length();j++){
            if(s[j]==x+'0')ans++;
        }
    }
    cout<<ans;
    return 0;
} */