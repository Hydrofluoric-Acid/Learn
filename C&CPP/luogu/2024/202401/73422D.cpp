#include<cstdio>
#include<vector>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
typedef struct{
    int val,pos;
}num;
int main(){
    int n;
    scanf("%d",&n);
    vector<num> v(n+1);
    vector<int> s(n+1);
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
        v[i].val=s[i];
    }
    if(n==1){
        cout<<s[1];
        return 0;
    }
    map<int,int> mp;
    sort(s.begin(),s.end());
    for(int i=1;i<=n;i++){
        mp[s[i]]=i;
    }
    for(int i=1;i<=n;i++){
        v[i].pos=mp[v[i].val];
    }
    for(int i=1;i<=n;i++){
        //cout<<v[i].val<<" ";
        if(n&1){
            if((v[i].pos)*2==(n+1)){
                int k=v[i].pos;
                int a=s[k+1],b=s[k-1];
                printf("%.1f\n",((a+b)/2.0));
            }
            else if(v[i].pos<((1+n)/2)){
                printf("%.1f\n",(s[(n+1)/2] + s[(n+1)/2+1])/2.0);
            }else if(v[i].pos>((n+1)/2)){
                printf("%.1f\n",(s[(n+1)/2]+s[(n+1)/2-1])/2.0);
            }
        }else{
            if(v[i].pos*2<((1+n))){
                printf("%.1f\n",s[n/2+1]*1.0);
            }else{
                printf("%.1f\n",s[n/2]*1.0);
            }
        }
    }
    return 0;
    
}