#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if(n==1||n==0)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void p_1(int a,int b){
    for(int i=1;i<=9;i++){
        if(i>b||i<a)continue;
        if(is_prime(i))cout<<i<<endl;
    }
}
void p_2(int a,int b){
    for(int i=1;i<=9;i++){
        int tmp=i*10+i;
        if(tmp>b||tmp<a)continue;
        if(is_prime(tmp))cout<<tmp<<endl;
    }
}
void p_3(int a,int b){
    for(int c=1;c<=9;c+=2){
        for(int d=0;d<=9;d++){
            int tmp=c*100+d*10+c;
            if(tmp>b||tmp<a)continue;
            if(is_prime(tmp))cout<<tmp<<endl;
        }
    }
}
void p_4(int a,int b){
    for(int c=1;c<=9;c+=2){
        for(int d=0;d<=9;d++){
            int tmp=c*1000+d*100+d*10+c;
            if(tmp>b||tmp<a)continue;
            if(is_prime(tmp))cout<<tmp<<endl;
        }
    }
}
void p_5(int a,int b){
    for(int c=1;c<=9;c+=2){
        for(int d=0;d<=9;d++){
            for(int e=0;e<=9;e++){
                int tmp=c*10000+d*1000+e*100+d*10+c;
                if(tmp>b||tmp<a)continue;
                if(is_prime(tmp))cout<<tmp<<endl;
            }
        }
    }
}
void p_6(int a,int b){
    for(int c=1;c<=9;c+=2){
        for(int d=0;d<=9;d++){
            for(int e=0;e<=9;e++){
                int tmp=c*100000+d*10000+e*1000+e*100+d*10+c;
                if(tmp>b||tmp<a)continue;
                if(is_prime(tmp))cout<<tmp<<endl;
            }
        }
    }
}
void p_7(int a,int b){
    for(int c=1;c<=9;c+=2){
        for(int d=0;d<=9;d++){
            for(int e=0;e<=9;e++){
                for(int f=0;f<=9;f++){
                    int tmp=c*1000000+d*100000+e*10000+f*1000+e*100+d*10+c;
                        if(tmp>b||tmp<a)continue;
                        if(is_prime(tmp))cout<<tmp<<endl;
                }
                
            }
        }
    }
}
void p_8(int a,int b){
    for(int c=1;c<=9;c+=2){
        for(int d=0;d<=9;d++){
            for(int e=0;e<=9;e++){
                for(int f=0;f<=9;f++){
                    int tmp=c*10000000+d*1000000+e*100000+f*10000+f*1000+e*100+d*10+c;
                        if(tmp>b||tmp<a)continue;
                        if(is_prime(tmp))cout<<tmp<<endl;
                }
                
            }
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    p_1(a,b);
    p_2(a,b);
    p_3(a,b);
    p_4(a,b);
    p_5(a,b);
    p_6(a,b);
    p_7(a,b);
    p_8(a,b);
    return 0;
}