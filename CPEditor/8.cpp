#include <deque>
#include <cstdio>
#include <vector>
using namespace std;
typedef struct num {
    int val, pos;
}num;
int main() {
    int n, m, t;
    scanf("%d %d", &n, &m);
    vector<num> v(n + 1);
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        v[i] = {t, i};
    }
    deque<num> q;
    for (int i = 2; i <= n; i++) {
        while (!q.empty() && q.front().pos < i - m) {
            q.pop_front();
        }
        while(!q.empty()&&q.back().val>v[i-1].val){
            q.pop_back();
        }
        q.push_back(v[i - 1]);
        
        
        if (!q.empty()) {
            ans[i] = q.front().val;
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}