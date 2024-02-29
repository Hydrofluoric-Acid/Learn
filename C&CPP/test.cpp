#include <iostream>
using namespace std;

int x1, x2, y1, y2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a=1,b=-2,c=3,d=-4;
    cout<<abs(a-c+b-d)<<endl;
    cout<<abs(a-c)+abs(b-d)<<endl;
    return 0;
}
