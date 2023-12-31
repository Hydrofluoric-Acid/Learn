#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;

LL cal(LL a, LL b)
{
    LL ans = 0;
    LL m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0;
    for (LL i = a; i <= b; i++)
    {
        if (i % 4 == 0)
        {
            m = i;
            break;
        }
    }
    for (LL i = a; i <= b; i++)
    {
        if (i % 5 == 0)
        {
            n = i;
            break;
        }
    }
    for (LL i = a; i <= b; i++)
    {
        if (i % 6 == 0)
        {
            o = i;
            break;
        }
    }
    for (LL i = a; i <= b; i++)
    {
        if (i % 4 == 0 && i % 5 == 0)
        {
            p = i;
            break;
        }
    }
    for (LL i = a; i <= b; i++)
    {
        if (i % 4 == 0 & i % 6 == 0)
        {
            q = i;
            break;
        }
    }
    for (LL i = a; i <= b; i++)
    {
        if (i % 5 == 0 && i % 6 == 0)
        {
            r = i;
            break;
        }
    }
    for (LL i = a; i <= b; i++)
    {
        if (i % 5 == 0 && i % 6 == 0 && i % 4 == 0)
        {
            s = i;
            break;
        }
    }
    LL k = b - a + 1;
    if (m != 0)
        m = k / m;
    if (n != 0)
        n = k / n;
    if (o != 0)
        o = k / o;
    if (p != 0)
        p = k / p;
    if (q != 0)
        q = k / q;
    if (r != 0)
        r = k / r;
    if (s != 0)
        s = k / s;
    ans = m + n + o - p - q - r + s;
    // printf("%lld %lld %lld %lld %lld %lld %lld",m,n,o,p,q,r,s);
    ans = k - ans;
    return ans;
}
LL p(LL a,LL b){
    if(a==1)return cal(a,b);
    else return cal(1,b)-cal(1,a-1);
}
int main()
{
    LL a, b, ans;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        cout<<p(a,b)<<endl;
    }
    return 0;
}