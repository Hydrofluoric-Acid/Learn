#include <stdio.h>
int main()
{
    int number, unit_counts, day, month, year;
    float price;
    printf("Enter item number:");
    scanf("%d", &number);
    printf("Enter unit price:");
    scanf("%f", &price);
    printf("Enter unit counts:");
    scanf("%d",&unit_counts);
    printf("Enter purchase date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item        Unit Price     Unit Counts   Total Price  Purchase Date\n");
    printf("%-10d  %11.2f  %12d  %13.2f  %4d/%2d/%2d\n",
           number, price, unit_counts, unit_counts*price,year,month,day);
    return 0;
}