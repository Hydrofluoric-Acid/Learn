#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum=0;
    cin>>n;
    int scores[n]={0};
    double ans;
    for(int i=0;i<n;i++){
        cin>>scores[i];
        sum+=scores[i];
    }
    int min_e=*min_element(scores,scores+n);
    int max_e=*max_element(scores,scores+n);
    ans=(sum-min_e-max_e)/(n-2);
    printf("%.2f",ans);
    return 0;
}