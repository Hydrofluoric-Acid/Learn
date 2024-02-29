#include <cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
  string ans="";
  int n,m;cin>>n>>m;
  while(m>0){
    if(m>=9){
      ans+='9';
      m-=9;
    }else{
      ans+=m+'0';
      m=0;
    }
  }
  for(int i=ans.length();i<n;i++){
    ans+='0';
  }
  cout<<ans;
  return 0;
}