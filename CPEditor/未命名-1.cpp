#include <iostream>
using namespace std;

int main(){
  long long  x,k,a,b,n;
  cin >> n;
  while(n--){
    cin >> x;
    if(x%8==0 && x > 0){
      cout << "Yes"<< endl;
      k=x/8;
      a=2*k-1;
      b=2*k+1;
      cout <<a << " "<< b <<endl;
    }
    else cout << "No" <<endl;
  }
  return 0;
}