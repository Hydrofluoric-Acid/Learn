#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> s;
    int n,m,p,a,count=0;long long price=0;
    cin>>n>>m;
    while(m--){
        cin>>p>>a;
        s[p]+=a;//未考虑到价格相同，会将值覆盖，s[p]=a;一个加号导致整个程序无法ac
    }
    map<int,int>::iterator it=s.begin();
    for(it=s.begin();it!=s.end();it++){
        
        price+=it->first*it->second;
        count+=it->second;
        if(count>=n){
            price-=(count-n)*it->first;
            break;
        }
        cout<<it->first<<":after"<<it->second<<"count"<<count<<"price"<<price<<endl;
    }
    cout<<price<<endl;
    return 0;
}


/* #include <iostream>
#include<algorithm>
using namespace std;
int indexOf(int a[],int m,int target){
    for(int i=0;i<m;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,m,count=0;
    long long total_price=0;
    cin>>n>>m;
    if(n!=0&&m!=0){
       int prices[m],counts[m],temp[m];
    for(int i=0;i<m;i++){
        cin>>prices[i]>>counts[i];
        temp[i]=prices[i];
    }
    sort(temp,temp+m);
    while(count<=n){
        for(int i=0;i<m;i++){
            int t=counts[indexOf(prices,m,temp[i])];
            if(n-count>t){
               count+=t;
               total_price+=t*temp[i];
            }else{
                total_price+=(n-count)*temp[i];
                count+=t;
                break;
            }
        }
    }
    cout<<total_price; 
    }else{
        cout<<0;
    }
    
}

 */