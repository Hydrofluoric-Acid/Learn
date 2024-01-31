#include<bits/stdc++.h>
using namespace std;
bool is_prime(int a){
    if(a==0||a==1)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int N,p[1230],index=0;
    cin>>N;
    vector<int> v;
    unordered_set<int> u;
    for(int i=2;i<=10000;i++){
        if(is_prime(i)){
            u.insert(i);
            p[index++]=i;
        }
    }
    for(int i=4;i<=N;i+=2){
        for(int j=0;j<u.size();j++){
            if(u.count(i-p[j])){
                printf("%d=%d+%d\n",i,p[j],i-p[j]);
                break;
            }
        }
    }
    return 0;
}