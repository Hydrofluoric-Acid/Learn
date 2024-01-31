#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N, C,tmp,temp;
    cin >> N >> C;
    long count=0;
    unordered_map<int,int> nums;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
        nums[arr[i]]++;
        //tmp=arr[i];
        //nums.insert(make_pair(tmp,nums.find(tmp)==nums.end()?1:nums.at(tmp)+1));
    }
    for(int j=0;j<N;j++){
        /* temp=arr[j]+C;
        if(nums[temp]){
            count+=nums.at(arr[j]);
        }else{
            count+=0;
        } */
        count+=nums[arr[j]+C];
    }
    cout<<count;
    return 0;
}
/* #include <bits/stdc++.h>//万能头文件,不用调用头文件<map> 
using namespace std;
int main()
{
long long n,c,co=0; //要开long long,否则会 WA 一个数据点 
cin>>n>>c;
int a[n+1];
map<int,int> b;//键值和映照数据都是 int 类型 
for(int i=1; i<=n; i++)
{
  cin>>a[i];
  b[a[i]]++;
}
for(int i=1; i<=n; i++)
  co+=b[a[i]+c];//反向思维,枚举 B+C
cout<<co<<endl;
return 0;评论区题解
} */


/*int n,c,count;
    cin>>n>>c;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){

    }
    cout<<count<<endl;
    return 0; 
sort(nums,nums+n,greater<int>());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]-nums[j]==c){
                count++;
            }
        }奇怪的错误，无法理解
    } */