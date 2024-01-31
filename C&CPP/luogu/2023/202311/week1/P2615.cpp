#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,a[40][40]={0};
    cin>>N;
    int x=1,y=(N+1)/2;
    a[x][y]=1;
    for(int k=2;k<=N*N;k++){
        if(x==1&&y!=N){
            x=N,y++;
        }else if(y==N&&x!=1){
            y=1,x--;
        }else if(x==1&&y==N){
            x++;
        }else{
            if(x>=1&&y<=N&&a[x-1][y+1]==0){
                x--,y++;
            }else{
                x++;
            }
        }
        a[x][y]=k;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout<<a[i][j];
            if(j!=N)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//根据上一个数的坐标来推下一个数，下面方法画蛇添足
/* #include<bits/stdc++.h>
using namespace std;
pair<int,int> index(int a,int N,int *arr){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(a==*(arr+i*N+j)){
                return make_pair(i+1,j+1);
            }
        }
    }
    return make_pair(0,0);
}
int l1c0(int a,int N,int *arr){
    for(int i=0;i<N-1;i++){
        if(a==*(arr+i)){
            return i+1;
        }
    }
    return 0;
}
int l0c1(int a,int N,int *arr){
    for(int i=1;i<N;i++){
        if(a==*(arr+(i*N)+N)){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int N,k,k1,k2,x,y;
    cin>>N;
    k=N*N;
    int a[40][40]={0};
    a[1][(N+1)/2]=1;
    for(int i=2;i<=k;i++){
        k1=i-1;
        if((k2=l1c0(k1,N,&a[1][1]))!=0){
            a[N][k2+1]=i;
        }else if((k2=l0c1(k1,N,&a[1][1]))!=0){
            a[k2-1][1]=i;
        }else if(i==a[1][N]){
            a[2][N]=i;
        }else{
            x=index(k1,N,&a[1][1]).first;
            y=index(k1,N,&a[1][1]).second;
            if(x>=1&&a[x-1][y+1]==0&&y<=N){
                a[x-1][y+1]=i;
            }else{
                a[x+1][y]=i;
            }
        }
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cout<<a[i][j];
            if(j!=10)cout<<" ";
            else{cout<<endl;}
        }
    }
    return 0;
} */