#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int t,a[3],max_e,tmp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]==a[1]&&a[1]==a[2]){printf("1 1 1\n");continue;}
        
        max_e=(*max_element(a,a+3))+1;
        if(a[0]==a[1]&&a[0]==max_e){printf("1 1 %d",max_e+1-a[2]);}
        if(a[0]==a[2]&&a[0]==max_e){printf("1 %d 1",max_e+1-a[1]);}
        if(a[1]==a[2]&&a[1]==max_e){printf("%d 1 1",max_e+1-a[0]);}
        for(int i=0;i<3;i++){tmp=a[i];a[i]=max_e-tmp;}
        for(int i=0;i<3;i++){
            tmp=a[i];
            tmp==1?tmp=0:tmp;
            cout<<tmp;
            if(i!=2)cout<<" ";
            }
        cout<<endl;
    }
    return 0;
}