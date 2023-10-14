#include<stdio.h>

int main(){
    int numerato_1st,denominator_1st,numerato_2nd,denominator_2nd;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&numerato_1st,&denominator_1st,&numerato_2nd,&denominator_2nd);
    printf("The sum is %d/%d",numerato_1st*denominator_2nd+numerato_2nd*denominator_1st,denominator_1st*denominator_2nd);
    return 0;
}