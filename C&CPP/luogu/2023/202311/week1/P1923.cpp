#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[5000000];//在这里无法运行，太大
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];//提交使用scanf，printf否则超时，数据多使用这两个
    }
    sort(a,a+n);
    cout<<a[k-1];
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int ans=0,k;
void find(int a[],int b,int c){
    if(b==c){
        ans=a[b];
    }
    int i=b,j=c,flag=a[(c+b)/2],tmp;
    do{
        while(a[i]<flag)i++;
        while(a[j]>flag)j--;
        if(i<=j){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;
            j--;
        }
    }while(i<=j);
    if(k<=j)find(a,b,j);
    else if(i<=k)find(a,i,k);
    else find(a,j+1,i-1);
}
int main(){
    int n,k,tmp;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>tmp;
        a[i]=tmp;
    }
    
} */
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,tmp;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>tmp;
        a[i]=tmp;
    }
    nth_element(a.begin(),a.begin()+k,a.end());
    cout<<*(a.begin()+k);
    return 0;
} */