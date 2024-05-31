#include <iostream>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
ll x1, x2, y1, y2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w, m, n;
    cin >> w >> m >> n;
    y1 = (m / w) + (m%w!=0);
    y2 = (n / w) + (n%w!=0);
    if (y1 & 1) {
        if(m%w==0)x1=w;
        else x1 = m % w;
    } else {
        if(m%w==0)x1=1;
        else x1 = w - m % w + 1;
    }
    if (y2 & 1) {
        if(n%w==0)x2=w;
        else x2 = n % w;
    }else {
        if(n%w==0)x2=1;
        else x2=w-n%w+1;
    }
    cout << abs(x1 + y1 - x2 - y2);
    //cout<<endl<<x1<<y1<<x2<<y2;
    return 0;
}