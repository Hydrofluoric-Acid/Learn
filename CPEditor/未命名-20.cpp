#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    if((x-4)%4==0){
      int a=(x-4)/4;
      if(a%2==1&&a>0){
        cout<<"Yes"<<endl<<a<<" "<<(a+2)<<endl;
      }else{
          cout<<"No"<<endl;
      }
    }else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}