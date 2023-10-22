/* 本题要求实现一个函数，可统计任一整数中某个位数出现的次数。例如-21252中，2出现了3次，则该函数应该返回3。

函数接口定义：
int Count_Digit ( const int N, const int D );
其中N和D都是用户传入的参数。N的值不超过int的范围；D是[0, 9]区间内的个位数。函数须返回N中D出现的次数。
 */#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
    
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit ( const int N, const int D ){
    int n=N;
    int count=0;
    if(n==0)return (D==0)?1:0;
    if(n<0)n=-n;
    while(n!=0){
        int b=n%10;
        if(b==D)count++;
        n/=10;
    }
    return count;
}
int Count_Digit ( const int N, const int D ){
    int n=N;
    if(n==0)return (D==0)?1:0;
    if(n<0)n=-n;
    int c[10]={10};
    while (n!=0){
        int index=n%10;//未用上数组全部，占用内存
        c[index]++;
        n/=10;
    }
    return c[D];
}