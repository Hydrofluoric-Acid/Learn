#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> n;
    int s=0,x,y;
    char ch;
    do{
        ch=getchar();
        if(ch>='0'&&ch<='9'){
            s=s*10+ch-'0';
        }else if(ch=='.'){
            n.push(s);
            s=0;
        }else if(ch!='@'){
            x=n.top();
            n.pop();
            y=n.top();
            n.pop();
            switch(ch){
                case '+':n.push(x+y);cout<<x+y<<endl;break;
                case '-':n.push(y-x);cout<<x-y<<endl;break;
                case '*':n.push(x*y);cout<<x*y<<endl;break;
                case '/':n.push(y/x);cout<<x/y<<endl;break;
            }
        }
    }while(ch!='@');
    cout<<n.top();
    return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
int cal(int a,int b,char op){
    switch(op){
        case '+':return a+b;break;
        case '-':return a-b;break;
        case '*':return a*b;break;
        case '/':return a/b;break;
    }
}
int main(){
    string s;
    cin>>s;
    stack<int> nums;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        int k=0,n=0;
        if(s[i]>='0'&&s[i]<='9'){
            string tmp="";
            while(s[i]!='.'){
            tmp+=s[i++];
            }
            for(int j=0;j<tmp.length();j++){
                n+=(tmp[tmp.length()-i]-'0')*(10<<j);
            }
            nums.push(n);
        }else if(s[i]=='.'){
            continue;
        }else{
            int a=nums.top();
            nums.pop();
            int b=nums.top();
            nums.pop();
            nums.push(cal(a,b,s[i]));
            cout<<cal(a,b,s[i])<<endl;
        }
    }
    
    cout<<nums.top();
    return 0;
} */