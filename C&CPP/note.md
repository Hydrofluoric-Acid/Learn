# 杂项
## C++中int,long,long long的取值范围
int/long 2e9
long long 9e18
## 快速幂

```
#include<iostream>
using namespace std;
long long pows(long long a,long long b,long long c){
    long long ans=1;
    while(b){
        if(b%2==1){//b&1
            ans*=a;  
        }
        a*=a;
        b/=2;//b>>=1;
    }
    return ans;
}
int main(){
    cout<<pows(2,2,3);
    return 0;
}
```
```
LL pows1(LL a,LL b){
    if(b==0)return 1;
    if(b==1)return a;
    LL c=pows1(a,b/2);
    if(b%2==0)return c*c;
    else return a*c*c;
}
```
## 快速幂求余
```
typedef long long LL;
LL pows(LL a,LL b,LL p){
    LL res=1;
    while(b){
        if(b&1){
            res=res*a%p;
        }
        a=a*a%p;
        b>>=1;
    }
    return res;
}
```
```
LL pows1(LL a,LL b,LL c){
    if(b==0)return 1%c;
    if(b==1)return a%c;
    LL d=pows1(a,b/2,c);
    d=(d*d)%c;
    if(b%2==0)return d;
    else return (d*a)%c;
}
```
## 欧几里得算法
```
int gcd(int a, int b){
    if (a%b == 0) {
        return b;
    }
    return gcd(b, a%b);
}
```
非递归实现
```
int gcd(int a, int b){
    int temp = a;
    while(a%b != 0){
        a = b;
        b = temp%b;
        temp = a;
    }
    return b;
}
```
## 最小公倍数
```
int MinMultiple( int a, int b){
    return (a * b)/gcd(a, b);
}
```
## 判断质数
```
bool is_prime(int a){
    if(a<2)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
```
# 高精度
## 加法
```
string add(int a,int b){
    string sa=to_string(a),sb=to_string(b);
    int La[500]={0},Lb[500]={0},Lc[501]={0},len=max(sa.length(),sb.length());
    for(int i=sa.length()-1,j=0;i>=0;i--,j++){
        La[j]=sa[i]-'0';
    }
    for(int i=sb.length()-1,j=0;i>=0;i--,j++){
        Lb[j]=sb[i]-'0';
    }
    for(int i=0;i<len;i++){
        Lc[i]+=La[i]+Lb[i];
        Lc[i+1]+=Lc[i]/10;
        Lc[i]%=10;
    }
    string ans="";
    if(Lc[len+1])len++;
    for(int i=len-1;i>=0;i--){
        ans += Lc[i] + '0';
    }
    return ans;
}
```
# 暴力求解法
## 7.1简单枚举
即使采用暴力法求解问题，对问题进行一定的分析往往会让算法更简洁、高效。
## 7.2枚举排列
枚举排列的常见方法有两种：一是递归枚举，二是用STL中的next_permutation。
# string常用方法
## 拼接操作
string& append(const char *s);  //把字符串s连接到当前字符串结尾
string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
## 查找和替换
int find(const string& str, int pos = 0); //查找str第一次出现位置,从pos开始查找
int rfind(const string& str, int pos = npos); //查找str最后一次位置,从pos开始查找
string& replace(int pos, int n, const string& str);  //替换从pos开始n个字符为字符串str
## 插入和删除
string& insert(int pos, const char* s);  //插入字符串
string& insert(int pos, const string& str);  //插入字符串
string& insert(int pos, int n, char c); //在指定位置插入n个字符c
string& erase(int pos, int n = npos); //删除从Pos开始的n个字符
## 子串
string substr(int pos = 0, int n = npos); //返回由pos开始的n个字符组成的字符串
char& charAt(int pos);
# /与>>
```>>```向下取整，```/```向0取整,如```-3>>1=-2,-3/2=-1```
# 矩阵快速幂
P3390 202402week2
# 并查集
```
int fa[N];
int find(int x){
    if(fa[x]==x)return x;
    else return fa[x]=find(fa[x]);
}
void merge(int i,int j){
    fa[find(i)]=find(j);
}
```
# Dijkstra
[P3371](luogu\2024\202403\week3\P3371.cpp)适用于边权为正
[P1576](luogu\2024\202403\week3\P1576.cpp)
[Dijkstra+priority_queue](luogu\2024\202403\week4\P3371.cpp)
# SPFA
[P3371-spfa.cpp](luogu\2024\202403\week3\P3371-spfa.cpp)一般用于边权有负的情况
# ST表
[P3865.cpp](luogu\2024\202403\week3\P3865.cpp)
# Floyd
[P2910](luogu\2024\202403\week3\P2910.cpp)
# 线性筛
[P3383](luogu\2024\202403\week3\P3383.cpp)
# 树状数组
[模板](luogu\2024\202403\week4\BinaryIndexTree.cpp)
[区间修改+单点查询](luogu\2024\202403\week4\hdu1556.cpp)
# dfs
[全球变暖](luogu\2024\202403\week4\P8662_dfs.cpp)
# bfs
[全球变暖](luogu\2024\202403\week4\P8662_bfs.cpp)