#include <bits/stdc++.h>
using namespace std;
vector<char> res;
string solve(string center, string back) {
    if (center == "" || back == "")
        return "";
    char end = back[back.length() - 1];
    int i = center.find(end);
    int l = i, r = center.length() - l - 1;
    string ls = solve(center.substr(0, l), back.substr(0, l));
    string rs = solve(center.substr(i + 1, r), back.substr(l, r));
    return end + ls + rs;
}
/*
思路：找到当前树根节点，递归分解为求左子树和右子树的先序排列
 */
int main() {
    string center, back;
    cin >> center >> back;
    cout << solve(center, back);
    return 0;
}