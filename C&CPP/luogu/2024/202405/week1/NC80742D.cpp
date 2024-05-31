/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q, l, R;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
        cin >> l >> R;
        string tmp = s.substr(l - 1, R - l + 1);
        int len = tmp.length();
        if(len<3){
            cout<<0<<endl;
            continue;
        }
        string r = "", e = "", d = "", rt = "", et = "", dt = "";
        for (int i = 0; i < len / 3; i++) {
            r += 'r';
            e += 'e';
            d += 'd';
        }
        int ans = INT_MAX;
        if (len % 3 == 2) {
            string t4 = r + 'r' + e + d + 'd', t5 = r + 'r' + e + 'e' + d, t6 = r + e + 'e' + d + 'd';
            int ans4 = 0, ans5 = 0, ans6 = 0;
            for (int i = 0; i < len; i++) {
                if (tmp[i] != t4[i])
                    ans4++;
                if (tmp[i] != t5[i])
                    ans5++;
                if (tmp[i] != t6[i])
                    ans6++;
            }
            //cout<<t4<<" "<<t5<<" "<<t6<<endl;
            ans = min(ans, min(ans4, min(ans5, ans6)));
        } else if (len % 3 == 1) {
            string t1 = r + "rr" + e + d, t2 = r + e + "ee" + d, t3 = r + e + d + "dd";
            int ans1 = 0, ans2 = 0, ans3 = 0;
            for (int i = 0; i < tmp.length(); i++) {
                if (tmp[i] != t1[i])
                    ans1++;
                if (tmp[i] != t2[i])
                    ans2++;
                if (tmp[i] != t3[i])
                    ans3++;
            }
            // cout<<t1<<" "<<t2<<" "<<t3<<endl;
            ans = min(ans, min(ans1, min(ans2, ans3)));
        }else{
            string tt=r+e+d;
            ans=0;
            for(int i=0;i<len;i++){
                if(tmp[i]!=tt[i])ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}//40/125,TLE

 */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 9;
using namespace std;
char s[N];
int a[N][3];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    cin>>s+1;
    for(int i=1;i<=n;i++){
        a[i][0]=a[i-1][0]+(s[i]!='r');//r
        a[i][1]=a[i-1][1]+(s[i]!='e');//e
        a[i][2]=a[i-1][2]+(s[i]!='d');//d
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        int len=r-l+1;
        if(len<3){
            cout<<0<<endl;
            continue;
        }
        
        if(len%3==0){
            len/=3;
            int ans=a[l+len-1][0]-a[l-1][0]+a[l+2*len-1][1]-a[l+len-1][1]+a[r][2]-a[l+2*len-1][2];
            cout<<ans<<endl;
        }else if(len%3==1){
            len/=3;
            int mx0=a[l+len][0]-a[l-1][0]+a[l+2*len][1]-a[l+len][1]+a[r][2]-a[l+2*len][2];
            int mx1=a[l+len-1][0]-a[l-1][0]+a[l+2*len][1]-a[l+len-1][1]+a[r][2]-a[l+2*len][2];
            int mx2=a[l+len-1][0]-a[l-1][0]+a[l+2*len-1][1]-a[l+len-1][1]+a[r][2]-a[l+2*len-1][2];
            cout<<min(mx0,min(mx1,mx2))<<endl;
        }else{
            len/=3;
            int mx0=a[l+len-1][0]-a[l-1][0]+a[l+2*len][1]-a[l+len-1][1]+a[r][2]-a[l+2*len][2];
            int mx1=a[l+len][0]-a[l-1][0]+a[l+2*len][1]-a[l+len][1]+a[r][2]-a[l+2*len][2];
            int mx2=a[l+len][0]-a[l-1][0]+a[l+2*len+1][1]-a[l+len][1]+a[r][2]-a[l+2*len+1][2];
            cout<<min(mx0,min(mx1,mx2))<<endl;
        }
    }
    return 0;
}