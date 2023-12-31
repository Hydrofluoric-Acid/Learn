#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,n,f[100];
    int p;
    cin>>f[1]>>f[2]>>p>>A>>n;
    for(int i=3;i<=n;i++){
        double x=pow(f[i-1],f[i-2]);
        cout<<x<<endl;
        double tmp=fmod(x,p)+1;
        cout<<tmp<<endl;
        f[i]=floor(log2(tmp))+A;
        cout<<f[i]<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<f[i]<<" ";
    }
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    double A,n,f[100];
    int p;
    cin>>f[1]>>f[2]>>p>>A>>n;
    for(int i=3;i<=n;i++){
        int tmp=((int)(pow(f[i-1],f[i-2])))%p+1;
        f[i]=(log2(tmp)+A);
    }
    for(int i=1;i<=n;i++){
        cout<<(int)f[i]<<" ";
    }
    return 0;
} */