#include<cstdio>
#include<map>
using namespace std;
int main(){
    int n,q,op,i,j,k;
    map< pair<int,int>, int> s;
    scanf("%d %d",&n,&q);
    while(q--){
        scanf("%d %d %d",&op,&i,&j);
        if(op==1){
            scanf("%d",&k);
            s[{i,j}]=k;
        }else{
            printf("%d\n",s[{i,j}]);
        }
    }
    return 0;
}
/* #include<cstdio>
#include<unordered_map>
using namespace std;
int main(){
    int n,q,op,i,j,k;
    unordered_map<long long,int> s;
    scanf("%d %d",&n,&q);
    while(q--){
        scanf("%d %d %d",&op,&i,&j);
        if(op==1){
            scanf("%d",&k);
            s[i*100000+j]=k;
        }else{
            printf("%d\n",s[i*100000+j]);
        }
    }
    return 0;
} */
/* #include<iostream>
#include<vector>
using namespace std;
int n,q,op,i,j,k;
int main(){
    cin>>n>>q;
    vector< vector<int> >locker(n+1);
    while(q--){
        cin>>op>>i>>j;
        if(op==1){
            cin>>k;
            if(locker[i].size()<j+1){
                locker[i].resize(j+1);
            }
            locker[i][j]=k;
        }else{
            cout<<locker[i][j]<<endl;
        }
    }
    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    typedef struct{
        int x,y;
    }p;
    int n,q,ans,index=0,op,i,j,k;
    cin>>n>>q;
    vector<p> potisition(n);
    vector<int> ks(n);
    while(q--){
        cin>>op>>i>>j;
        if(op==1){
            cin>>k;
            potisition[index]=p{i,j};
            ks[index++]=k;
        }else{
            for(int m=0;m<index;m++){
                if(potisition[m].x==i&&potisition[m].y==j){
                    cout<<ks[m]<<endl;
                }
            }
        }
    }
    return 0;
} */