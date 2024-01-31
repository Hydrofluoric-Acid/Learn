/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n2,a1[10010],a2[10010],sum=0;
    cin>>n;
    memset(a1,127,sizeof(a1));
    memset(a2,127,sizeof(a2));
    for(int i=0;i<n;i++)cin>>a1[i];
    sort(a1,a1+n);
    int i=0,j=0,w;
    for(int k=1;k<n;k++){
        w=a1[i]<a2[j]?a1[i++]:a2[j++];
        w+=a1[i]<a2[j]?a1[i++]:a2[j++];
        a2[n2++]=w;
        sum+=w;
    }
    cout<<sum;
    return 0;
} */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans;
    priority_queue<int,vector<int>,greater<int> >q;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        q.push(x);
    }
    while(q.size()>=2){
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        ans+=a+b;
        q.push(a+b);
    }
    cout<<ans;
    return 0;
}    





























/* #include<bits/stdc++.h>
using namespace std;
int a[10000];
int solve(int start,int end){
    int n=0;
    if(end-start==1)return a[start]+a[end];
    sort(a+start,a+end);
    a[start+1]+=a[start];
    n+=a[start+1];
    start++;
    n+=solve(start,end);
    return n;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(0,n-1);
    return 0;
} 第一次自己写出递归*/