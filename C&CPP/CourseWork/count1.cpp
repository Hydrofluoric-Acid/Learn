#include <iostream>
using namespace std;
int main() {
    int nums[101] = {0}, n;
    cout << "Enter the integers between 1 and 100:";
    while (true) {
        cin >> n;
        if (!n)
            break;
        nums[n]++;
    }
    for (int i = 0; i < 101; i++) {
        if (nums[i]) {
            cout << i << " occurs " << nums[i] << " time";
            if (i > 1)
                cout << "s";
            cout << endl;
        }
    }
    return 0;
}