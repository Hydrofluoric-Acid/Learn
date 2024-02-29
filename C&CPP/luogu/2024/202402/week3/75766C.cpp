#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

bool cmp(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vector<string> res;
    int len = s.length();
    int p = 0, q = 0;
    while (p != len) {
        char c = s[q];
        if ((c - '0') % 2 == 0) {
            res.push_back(s.substr(p, q - p + 1));
            q = q + 1;
            p = q;
        } else {
            q++;
        }
    }
    sort(res.begin(), res.end(), cmp);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
