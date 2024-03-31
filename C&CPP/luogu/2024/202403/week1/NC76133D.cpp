/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>n;
    vector<int> v(n+1,0),u(n),st(n);
    for(int i=1;i<=n;i++){
        st[i-1]=i;
        cin>>u[i-1];
        v[t]++;
    }
    int p=1,q=1;
    while(true){
        if(v[p]<=1)p++;
        for(q;v[q]!=0&&q<=n;q++);
        v[q]++,v[p]--;
        int a=find(u.begin(),u.end(),p)-u.begin()+1;
        cout<<a<<endl;
        u[a]=q;
        cout<<a+1<<" "<<q<<endl;
        vector<int> k=u;
        sort(k.begin(),k.end());
        if(k==st)break;
    }
    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> u(n), st(n), v(n + 1, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> u[i];
        st[i - 1] = i;
        mp[u[i]]++;
        if (u[i] <= n)
            v[u[i]]++;
    }
    int q = 1;

    for (auto k : mp) {
        if (k.first > n && k.second > 0) {
            for (int i = k.second; i > 0; i--) {
                int a = find(u.begin(), u.end(), k.first) - u.begin();
                for (q; q <= n && v[q] != 0; q++)
                    ;
                u[a] = q;
                v[q]++;
                cout << a + 1 << " " << q << endl;
            }
        } else if (k.first <= n && k.second > 1) {
            for (int i = k.second; i >= 1; i--) {
                int a = find(u.begin(), u.end(), k.first) - u.begin();
                for (q; q <= n && v[q] != 0; q++)
                    ;
                u[a] = q;
                v[q]++;
                cout << a + 1 << " " << q << endl;
            }
        }
    }

    return 0;
} */
/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> u(n), st(n), v(n + 1, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        //cin >> u[i];
        scanf("%d",&u[i]);
        st[i - 1] = i;
        mp[u[i]]++;
        if (u[i] <= n)
            v[u[i]]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(v[i]!=1){
            ans++;
        }
    }
    cout<<ans<<endl;
    int q = 1;
    for (auto k : mp) {
        if (k.first > n && k.second > 0) {
            for (int i = k.second; i > 0; i--) {
                int a = find(u.begin(), u.end(), k.first) - u.begin();
                for (q; q <= n && v[q] != 0; q++);
                u[a] = q;
                v[q]++;
                //ans.push_back(make_pair(a+1,q));
                //ans[len++]=make_pair(a+1,q);
                printf("%d %d\n",a+1,q);
                //cout << a + 1 << " " << q << endl;
                //ans++;
            }
        } else if (k.first <= n && k.second > 1) {
            for (int i = k.second; i > 1; i--) {
                int a = find(u.begin(), u.end(), k.first) - u.begin();
                for (q; q <= n && v[q] != 0; q++);
                u[a] = q;
                v[q]++;
                //ans.push_back(make_pair(a+1,q));
                //ans[len++]=make_pair(a+1,q);
                //cout << a + 1 << " " << q << endl;
                printf("%d %d\n",a+1,q);
                //ans++;
            }
        }else{
            continue;
        }
        
    }
    
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>n;
    vector<bool> f(n+1,false);
    vector<int> v;
    for(int i=1;i<=n;i++){
        cin>>t;
        if(t<=n){
            if(!f[t]){
                f[t]=true;
            }else{
                v.push_back(i);
            }
        }else{
            v.push_back(i);
        }
    }
    cout<<v.size()<<endl;
    int p=1;
    for(int i=0;i<v.size();i++){
        for(p;f[p]&&p<=n;p++);
        cout<<v[i]<<" "<<p<<endl;
        f[p]=true;
    }
    return 0;
}