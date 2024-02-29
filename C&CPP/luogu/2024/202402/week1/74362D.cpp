#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int N = 200010;
using namespace std;
typedef struct {
    int val;
    Node *next, *pre;
} Node;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q, opt, x, y, j = 1;
    vector<Node> v(N, {0, NULL, NULL});
    map<int, int> mp;
    mp[0] = 0;
    cin >> q;
    while (q--) {
        cin >> opt;
        if (opt == 1) {
            cin >> x >> y;
            int k = mp[y];
            mp[x] = j;
            v[j].val = x;
            v[j].pre = &v[k];
            Node tmp = *v[k].next;
            tmp.pre = &v[j];
            v[x].next = v[k].next;
            v[k].next = &v[j];
            j++;
        } else {
            cin >> x;
            int k = mp[x];
            Node tmp = v[k], l = *v[k].pre, r = *v[k].next;
            l.next = tmp.next;
            r.pre = tmp.pre;
        }
    }
    cout << (j - 1) << endl;
    Node *tmp = v[0]->next;
    while (tmp) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    return 0;
}