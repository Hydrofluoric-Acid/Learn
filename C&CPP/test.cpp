#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int mult(int a,int b){
    return (a*b)/gcd(a,b);
}

int main() {
    cout<<gcd(400,50);
    cout<<mult(400,3);
    return 0;
}
