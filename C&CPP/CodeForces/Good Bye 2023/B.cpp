#include<set>
#include<iostream>
#include<numeric>
#include<algorithm>
#include<iterator>
using namespace std;
typedef long long ll;
int main(){
    ll t,a,b,x;cin>>t;
    
    while(t--){
        cin>>a>>b;
        if(a==1){
            cout<<b*b<<endl;
            continue;
        }
        set<ll> s;
        s.insert(a);
        s.insert(b);
        x=__gcd(a,b);
        if(x!=1){
            s.insert(x);
            s.insert(b/x);
        }
        
        int m=*s.begin(),n=*--s.end();
        

       /* set<ll>::iterator it=s.begin();
        for(it;it!=s.end();it++){
            cout<<*it<<" ";
        } */
        //cout<<endl;
        /* if(s.size()&1){

        } */
        /* int m=*(s.begin()),n=*(--s.end());
        cout<<m<<" "<<n<<" "; */
        cout<<(ll)(m*n)<<endl;
    }
    return 0;
}