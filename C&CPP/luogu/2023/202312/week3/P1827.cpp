#include <bits/stdc++.h>
using namespace std;
vector<char> res;
string solve(string center, string front) {
    if (center == "" || front == "")
        return "";
    char end = front[0];
    int i = center.find(front[0]);
    int l = i, r = front.length() - l - 1;
    string ls = solve(center.substr(0, l), front.substr(1, l));
    string rs = solve(center.substr(i + 1, r), front.substr(front.length() - r, r));
    return ls + rs + end;
}
/*
写一次并且通过！！！
 */
int main() {
    string center, front;
    cin >> center >> front;
    cout << solve(center, front);
    return 0;
}