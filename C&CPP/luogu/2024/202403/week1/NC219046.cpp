#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
vector<int> t(3);
bool check(int a,int b,int c){
    if(a+b<=c||a+c<=b||b+c<=a||a-b>=c||a-c>=b||b-c>=a){
        return false;
    }
    return true;
}
int gg[3];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<int> v(7);
    while(t--){
        for(int i=1;i<=6;i++){
            cin>>v[i];
        }
        bool f=false;
        for(int i=1;i<=4;i++){
            for(int j=i+1;j<=5;j++){
                for(int k=j+1;k<=6;k++){
                    bool f1=check(v[i],v[j],v[k]);
                    int gk=0;
                    for(int g=1;g<=6;g++){
                        if(g!=i&&g!=j&&g!=k){
                            gg[gk++]=g;
                        }
                    }
                    bool f2=check(v[gg[0]],v[gg[1]],v[gg[2]]);
                    /* for(auto ii:gg){
                        cout<<ii<<" ";
                    }
                    cout<<endl; */
                    if(f1&&f2){
                        cout<<"Yes"<<endl;
                        f=true;
                        break;
                    }
                }
                if(f)break;
            }
            if(f)break;
        }
        if(!f)cout<<"No"<<endl;
    }
    return 0;
}