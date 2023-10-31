#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,x,h,q,a[6]={0},ans=0;
    cin>>w>>x>>h;
    int s[w][x][h]={0};
    for(int i=0;i<w;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<h;k++){
                s[i][j][k]=0;
            }
        }
    }

    cin>>q;
    while(q--){
       for(int i=0;i<q;i++){
        for(int i=0;i<6;i++){
        cin>>a[i];
        }
        for(int j=a[0];j<=a[3];j++){
            for(int k=a[1];k<=a[4];k++){
                for(int l=a[2];l<=a[5];l++){
                    s[j][k][l]=1;
                    
                }
            }
        }//花了一个月的时间在一个oj网站只刷了这些题，从此入门了绝大多数算法 - 玄之不玄的文章 - 知乎
https://zhuanlan.zhihu.com/p/163681526
    } 
    }
    
    for(int i=0;i<w;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<h;k++){
                //t++;printf("%d %d %d %d\n",i,j,k,s[i][j][k]);
                if(s[i][j][k]==0){
                    ans++;
                    
                }
            }
        }
    }
    cout<<ans<<endl;
    //cout<<t;
}