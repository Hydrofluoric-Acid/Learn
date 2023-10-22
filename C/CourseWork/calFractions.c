#include<stdio.h>

int main(){
    int numerato_1st,denominator_1st,numerato_2nd,denominator_2nd;
    printf("Enter first fraction:");
    scanf("%d/%d",&numerato_1st,&denominator_1st);
    printf("Enter second fraction:");
    scanf("%d/%d",&numerato_2nd,&denominator_2nd);
    printf("The sum is %d/%d",numerato_1st*denominator_2nd+numerato_2nd*denominator_1st,denominator_1st*denominator_2nd);
    return 0;
}