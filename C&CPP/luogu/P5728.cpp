#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,ans=0;
    cin>>N;
    int s[N][3];
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin>>s[i][j];
        }
    }
    /* int b=abs(s[1][0]-s[3][0])<=5;
    cout<<b; */
    for(int i=0;i<=N-2;i++){
        for(int j=i+1;j<N;j++){
            
            if(abs(s[i][0]-s[j][0])<=5&&
            abs(s[i][2]-s[j][2])<=5&&
            abs(s[i][1]-s[j][1])<=5&&
            abs(s[i][0]+s[i][1]+s[i][2]-s[j][0]-s[j][1]-s[j][2])<=10){
                ans++;
                cout<<i<<" "<<j<<" "<<s[i][0]<<s[j][0]<<endl;
            }
            //printf("%d\n",abs(s[i][0]+s[i][1]+s[i][2]-s[j][0]-s[j][1]-s[j][2]));
        }
    }
    cout<<ans;
    return 0;
}
