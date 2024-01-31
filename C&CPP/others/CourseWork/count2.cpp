#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    double n, sum = 0;
    int cot = 0;
    vector<double> v;
    while (true) {
        cin >> n;
        if (n < 0)
            break;
        sum += n;
        v.push_back(n);
    }
    double average = sum * 1.0 / v.size();
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= average)
            cot++;
    }
    printf("%d人大于等于平均分，%d人低于平均分", cot, v.size() - cot);
    return 0;
}