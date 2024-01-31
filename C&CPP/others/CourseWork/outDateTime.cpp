#include<iostream>
#include<cstdio>
using namespace std;
bool is_leap_year(int year){
    if(year%400==0||(year%100!=0&&year%4==0))return true;
    return false;
}
int main(){
    cout<<"Please enter the production date of an product：";
    int year,month,day,m[12]={31,28,31,30,31,30,31,31,30,31,30,31},ans=0;
    cin>>year>>month>>day;
    if(is_leap_year(year))m[1]=29;
    for(int i=month;i<12;i++){
        ans+=m[i];
    }
    ans+=m[month-1]-day;
    printf("The expiration date of the product is %d days from %d/%d/%d。",ans,year,month,day);
    return 0;
}