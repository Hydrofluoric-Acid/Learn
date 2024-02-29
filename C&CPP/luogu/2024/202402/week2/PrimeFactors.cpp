#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1e9;
const int N = 1e5 + 5;
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int primes[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    map<int,int> factors;//primes的最大值最好大于等于INT_MAX或LLONG_MAX
    int n=114514;
    for(int i=0;i<25;i++){
        if(primes[i]*primes[i]>n)break;
        while(n%primes[i]==0){
            n/=primes[i];
            factors[primes[i]]++;
        }
    }
    if(n>1)factors[n]++;
    for(auto t:factors){
        printf("%d %d\n",t.first,t.second);
    }
    return 0;
}