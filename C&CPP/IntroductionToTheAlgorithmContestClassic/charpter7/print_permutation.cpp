#include<iostream>
#include<vector>
using namespace std;
vector<int> v={1,1,1,1,1,1},v1(6,0);
void print_subset(int x,int n){//生成指定子集的所有子集
    if(x==n){
        for(int i=0;i<n;i++){
            if(v1[i]==1){
                cout<<v[i]<<" ";
            }    
        }
        cout<<endl;
    }else{
        print_subset(x+1,n);
        v1[x]=1;
        print_subset(x+1,n);
        v1[x]=0;
    }
}
void print_permutation(int x,vector<int> &ans,int n){//生成所有排列
    if(x==n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }else{
        for(int i=0;i<v.size()-1;i++){
            bool flag=true;
            for(int j=0;j<ans.size();j++){
                if(ans[j]==v[i])flag=false;
            }
            if(ans[i]!=ans[i+1]){
                ans.push_back(v[i]);
                print_permutation(x+1,ans,n);
                ans.pop_back();
            }
        }
    }
}
int main(){
    vector<int> ans;
    print_permutation(0,ans,3);
    //print_subset(0,6);
    return 0;
}