#include<bits/stdc++.h>
using namespace std;
int main(){
    typedef struct{
        int m;
        int v;
    } keyValue;
    int N,T,m,v,t=0;
    double value=0;
    cin>>N>>T;
    double tmp;
    map<double,keyValue,greater<double> > s;
    for(int i=0;i<N;i++){
        cin>>m>>v;
        tmp=1.0*v/m;
        if(s.find(tmp)==s.end()){//未加上本行，会访问未初始化的keyvalue对象导致结果不正确
            s[tmp].m+=m;
        s[tmp].v+=v;
        }
        /* bool cmp(Node aa,Node bb){//定义排序方法
	return aa.v*bb.w>aa.w*bb.v;//按性价比从高到低排序，为防止精度问题直接交叉相乘
} */
    }
    map<double,keyValue>::iterator it=s.begin();
    for(it;it!=s.end();it++){
        //printf("%lf %d %d\n",it->first,it->second.m,it->second.v);
        value+=1.0*it->second.v;
        //t+=it->second.m;cout<<t<<" "<<value<<endl;
        if(t>=T){
            //value-=(t-T)*1.0*it->second.v/it->second.m;
            break;
        }
        
    }
    printf("%.2f",value);
    return 0;
}