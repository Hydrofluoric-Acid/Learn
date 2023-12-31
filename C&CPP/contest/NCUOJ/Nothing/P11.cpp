#include <iostream>
#include <vector>
typedef long long LL;
using namespace std;

string add(string a, string b) {
    string res = "";
    int A[101] = {0}, B[101] = {0}, C[101] = {0};
    int len = (a.length() > b.length() ? a.length() : b.length());
    for (int i = a.length() - 1, j = 1; i >= 0; i--, j++) {
        A[j] = a[i] - '0';
    }
    for (int i = b.length() - 1, j = 1; i >= 0; i--, j++) {
        B[j] = b[i] - '0';
    }
    for (int i = 1; i <= len; i++) {
        C[i] += A[i] + B[i];
        C[i + 1] = C[i] / 10;
        C[i] %= 10;
    }
    if (C[len + 1])
        len++;
    for (int i = len; i >= 1; i--) {
        res += (C[i] + '0');
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    string k = "1";
    for (LL i = 2; i <= n; i++) {
        k = add(k, to_string(i));
    }
    cout << k;
    return 0;
}
