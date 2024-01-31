#include<bits/stdc++.h>
using namespace std;
int main(){
    typedef struct stu{
        string name;
        int age,score;
    } S;
    int n;
    cin>>n;
    vector<S> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].age>>s[i].score;
    }
    for(int i=0;i<n;i++){
        int tmp=(s[i].score*6/5>600)?600:s[i].score*6/5;
        cout<<s[i].name<<" "<<s[i].age+1<<" "<<tmp<<endl;
    }
    return 0;
}