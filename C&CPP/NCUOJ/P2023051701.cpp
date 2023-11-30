#include<iostream>
#include<unordered_set>
using namespace std;
unordered_set<int> s;
int cal(int a){
    int s=0;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            int b=a/i;
            s+=2;
            if(i==b)s--;
        }
    }
    return s;
}
int main(){
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        ans+=cal(i);
    }
    cout<<ans;
}