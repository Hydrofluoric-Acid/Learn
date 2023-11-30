



/* #include<bits/stdc++.h>
using namespace std;
int len(int a){
    int t=0;
    while(a!=0){
        a/=10;
        t++;
    }
    return t;
}
int main(){
    int i,a,b,c;
    cin>>i;
    cin.ignore();
    char last;
    string s[50];
    for(int j=0;j<i;j++){
        getline(cin,s[j]);
    }
    for(int j=0;j<i;j++){
        //经过几次小修改发现屎山了，遂弃之
    if(s[0]=='a'||s[0]=='b'||s[0]=='c'){
        last=s[0];s[0]=' ';
    }
    sscanf(s.c_str(),"%d %d",&a,&b);
    switch (last){
    case 'a': printf("%d+%d=%d\n",a,b,a+b);break;
    case 'b':printf("%d-%d=%d\n",a,b,a-b);break;
    case 'c':printf("%d*%d=%d\n",a,b,a*b);break;
    }
    }
    cout<<endl<<len(45);
    return 0;
} */