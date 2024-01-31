#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,x,h,q,x1,y1,z1,x2,y2,z2,ans=0;
    cin>>w>>x>>h;
    int a[w+1][x+1][h+1];
    cin>>q;
    for(int i=1;i<=w;i++){
            for(int j=1;j<=x;j++){
                for(int k=1;k<=h;k++){
                    a[i][j][k]=0;
                }
            }
        }
    while(q--){
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                for(int k=z1;k<=z2;k++){
                    a[i][j][k]=1;
                }
            }
        }
    }
    for(int i=1;i<=w;i++){
            for(int j=1;j<=x;j++){
                for(int k=1;k<=h;k++){
                    ans+=a[i][j][k];
                }
            }
        }
    cout<<w*x*h-ans;
    return 0;
}
/* 
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
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<h;k++){
                if(s[i][j][k]==0){
                    ans++;
                    
                }
            }
        }
    }
    cout<<ans<<endl;
}
 */



















































/* #include<bits/stdc++.h>
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
        }
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
} */