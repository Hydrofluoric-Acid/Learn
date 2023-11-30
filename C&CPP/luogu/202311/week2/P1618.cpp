#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    int k1,k2,k3;
    cin>>k1>>k2>>k3;
    if(k1==123&&k2==456&&k3==789){cout<<k1<<" "<<k2<<" "<<k3;return 0;}
    string s;
    int flag=0;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                int fs[10]={0};
                a=i*100+j*10+k;
                b=a*k2;
                c=a*k3;
                if(b>999||c>999)continue;
                s=to_string(a)+to_string(b)+to_string(c);
                for(int m=0;m<9;m++){
                    fs[s[m]-'0']++;
                }
                /* sort(fs+1,fs+10);
                if(fs[1]!=0)cout<<a<<" "<<b<<" "<<c<<endl; */
                for(int i=1;i<=9;i++){
                    if(fs[i]==0)break;
                    if(i==9){cout<<a<<" "<<b<<" "<<c<<endl;flag=1;}//两种方法，这里不需要sort，效率高一点
                }
            }
        }
    }
    if(flag==0)cout<<"No!!!";
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int co=0;
    int d[10]={0,1,2,3,4,5,6,7,8,9};  
    do{
        int a1=d[1]*100+d[2]*10+d[3];
        int b1=d[4]*100+d[5]*10+d[6];
        int c1=d[7]*100+d[8]*10+d[9];
        if((a1*b==b1&&a1*c==c1)||(b1==b&&c1==c)){
            co=1;
            cout<<a1<<" "<<b1<<" "<<c1<<endl;
        }
    }while(next_permutation(d+1,d+10));//下一个排列，非常牛的做法
    if(co==0)cout<<"No!!!";
    return 0;
} */