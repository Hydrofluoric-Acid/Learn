#include <iostream>
using namespace std;
int main() {
    float perf, salary;
    cin >> perf;
    if (perf >= 0 && perf <= 1000) {
        salary = perf * 1.01;
    } else if (perf > 1000 && perf <= 5000) {
        salary = perf * 1.02;
    } else if (perf > 5000 && perf <= 10000) {
        salary = perf * 1.03;
    } else if (perf > 10000 && perf <= 100000) {
        salary = perf * 1.04;
    } else {
        salary = perf * 1.05;
    }
    cout << salary;
    return 0;
}