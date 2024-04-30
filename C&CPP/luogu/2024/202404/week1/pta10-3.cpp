/* #include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b){
    return a.first<b.first;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> z,w;
    vector<pair<string,int>> ansz,answ;
    string s1,s2,s="";
    int t=0,k=10;
    getline(cin,s1),getline(cin,s2);
    s1+=',',s2+=',';
    for(int i=2;i<s1.length();i++){
        if(s1[i]>='a'&&s1[i]<='z'&&s1[i]!=' '){
            s+=s1[i];
        }else if(s1[i]==','){
            z[s]+=t;
            t=0;
            s="";
        }else if(s1[i]>='0'&&s1[i]<='9'){
            t=t*k+(s1[i]-'0');
        }
    }
    for(int i=2;i<s2.length();i++){
        if(s2[i]>='a'&&s2[i]<='z'&&s2[i]!=' '){
            s+=s2[i];
        }else if(s2[i]==','){
            w[s]+=t;
            t=0;
            s="";
        }else if(s2[i]>='0'&&s2[i]<='9'){
            t=t*k+(s2[i]-'0');
        }
    }
    for(auto i:z){
        if(w[i.first]){
            if(i.second>w[i.first]){
                ansz.push_back({i.first,i.second});
            }else{
                answ.push_back({i.first,w[i.first]});
            }
        }
    }
    if(ansz.size()==0&&answ.size()==0){
        cout<<"none";
    }else{
        sort(ansz.begin(),ansz.end(),cmp);
        if(ansz.size())cout<<"z:";
        for(int i=0;i<ansz.size();i++){
            cout<<ansz[i].first<<' '<<ansz[i].second;
            if(i!=ansz.size()-1)cout<<',';
        }
        if(ansz.size()&&answ.size())cout<<',';
        if(answ.size())cout<<"w:";
        for(int i=0;i<answ.size();i++){
            cout<<answ[i].first<<' '<<answ[i].second;
            if(i!=answ.size()-1)cout<<',';
        }

    }
    return 0;
} */
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9 + 7, inf = 0x3f3f3f3f, N = 1e5 + 5;
using namespace std;

struct info{
    char n;
    string city;
    int t;
};
bool cmp(info a,info b){
    return a.city<b.city;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> z,w;
    vector<info> ans;
    string s1,s2,s="";
    int t=0,k=10;
    getline(cin,s1),getline(cin,s2);
    s1+=',',s2+=',';
    for(int i=2;i<s1.length();i++){
        if(s1[i]>='a'&&s1[i]<='z'&&s1[i]!=' '){
            s+=s1[i];
        }else if(s1[i]==','){
            z[s]+=t;
            t=0;
            s="";
        }else if(s1[i]>='0'&&s1[i]<='9'){
            t=t*k+(s1[i]-'0');
        }
    }
    for(int i=2;i<s2.length();i++){
        if(s2[i]>='a'&&s2[i]<='z'&&s2[i]!=' '){
            s+=s2[i];
        }else if(s2[i]==','){
            w[s]+=t;
            t=0;
            s="";
        }else if(s2[i]>='0'&&s2[i]<='9'){
            t=t*k+(s2[i]-'0');
        }
    }
    for(auto i:z){
        if(w[i.first]){
            char c='w';
            if(i.second>w[i.first]){
                c='z';
            }
            ans.push_back({c,i.first,max(i.second,w[i.first])});
        }
    }
    if(ans.size()==0){
        cout<<"none";
    }else{
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].n<<":"<<ans[i].city<<" "<<ans[i].t;
            if(i!=ans.size()-1)cout<<',';
        }
        
    }
    return 0;
}