#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, index = 0;
    cin >> N >> M;
    int tmp=N;
    cin.ignore();
    string s;
    int flags[N];
    while (N--)
    {
        flags[index] = 1;
        getline(cin, s);
        stack<int> t;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'S')
            {
                t.push(1);
            }
            if (t.size() > M)
            {
                flags[index] = 0;
                break;
            }
            if (s[j] == 'X')
            {
                if (t.size() == 0)
                {
                    flags[index] = 0;
                    break;
                }
                t.pop();
            }
        }
        flags[index]=flags[index]&&t.empty();
        index++;
    }
    for(int x=0;x<tmp;x++){
        if(flags[x]==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        if(x!=tmp-1){
            cout<<endl;
        }
    }

} /* /* stack<int> t;
         while((c=getchar())!=EOF){
             if(c=='S'){
                 t.push(1);
             }
             if(t.size()>M){
                 flags[i]=0;
                 break;
             }
             if(c=='X'){
                 if(t.size()==0){flags[i]=0;break;}
                 t.pop();
             }
         }
     } */