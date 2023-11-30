#include <iostream>
using namespace std;

void quicksort(int a, int b, int c[]) {
    int i = a, j = b, flag = c[(a + b) / 2];
    do {
        while (c[i] < flag) i++;
        while (c[j] > flag) j--;
        if (i <= j) {
            int tmp = c[i];
            c[i] = c[j];
            c[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (a < j) quicksort(a, j, c);
    if (i < b) quicksort(i, b, c);
}

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    quicksort(0, 4, a);
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
