/* 已知上楼可以走一个台阶，或者两个台阶，那么，我们每一步就是一阶或者两阶，
那么，假设我们现在站在第五层，回顾上来的最后一步的过程，我们可能是从第三
层一步跨两层上来的，也可能是从第四层一步跨一层上来的，请问还有其它情况吗
？显然只有这两种情况呀！毕竟只允许一步跨两层或者一层，你不可能原地不动或者飞上去！ 
由此，我们分析得出了结论：f(n)=f(n-1)+f(n-2)*/
 #include<iostream>
 using namespace std;
 int n,f[5050][5050],len;
 void add(int k){
    for(int i=1;i<=len;i++){
        f[k][i]=f[k-1][i]+f[k-2][i];
    }
    for(int i=1;i<=len;i++){
        if(f[k][i]>=10){
            f[k][i+1]+=f[k][i]/10;
            f[k][i]%=10;
            if(f[k][len+1]>0)len++;
        }
    }
 }
 int main(){
    cin>>n;
    len=1;
    f[1][1]=1;
    f[2][1]=2;
    for(int i=3;i<=n;i++){
        add(i);
    }
    for(int i=len;i>=1;i--){
        cout<<f[n][i];
    }
    return 0;
 }

