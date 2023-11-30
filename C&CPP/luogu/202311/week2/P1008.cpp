#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    string s;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=1;k<=9;k++){
                int fs[10]={0};
                a=i*100+j*10+k;
                b=2*a;
                c=3*a;
                if(b>999||c>999)continue;
                s=to_string(a)+to_string(b)+to_string(c);
                for(int m=0;m<9;m++){
                    fs[s[m]-'0']++;
                }
                /* sort(fs+1,fs+10);
                if(fs[1]!=0)cout<<a<<" "<<b<<" "<<c<<endl; */
                for(int i=1;i<=9;i++){
                    if(fs[i]==0)break;
                    if(i==9)cout<<a<<" "<<b<<" "<<c<<endl;//两种方法，这里不需要sort，效率高一点
                }
            }
        }
    }
    return 0;
}