#include<iostream>
using namespace std;
typedef long long LL;
LL solve(LL a){
    LL res=0;
    string s=to_string(a);
    for(int i=0;i<s.length();i++){
        res+=((s[i]-'0')%9);
    }
    return res;
}
LL c18(LL a,LL b){
    LL res=0;
    for(int i=a;i<=b;i++){
        if(i%9!=0)res+=solve(i);
    }
    res%=9;
    return res;
}
/* int main(){
    int q;
    LL a,b;
    cin>>q;
    while(q--){
        LL res=0;
        cin>>a>>b;
        if(b-a<18){
            cout<<c18(a,b)<<endl;
        }else{
            LL c=a+(9-a%9);
            LL d=b-(b%9);
            cout<<((c18(a,c)+c18(d,b))%9)<<endl;
        }
        
    }
    return 0;
} */
int main(){
    int q;
    LL a,b;
    cin>>q;
    while(q--){
        LL res=0;
        cin>>a>>b;
        if((a+b)&1){
            cout<<((a+b)%9*((b-a+1)/2)%9)%9<<endl;
        }else{
            cout<<(((a+b)/2)%9*(b-a+1)%9)%9<<endl;
        }
        
    }
    return 0;
}