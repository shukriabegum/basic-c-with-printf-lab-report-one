#include<stdio.h>
int main()
{
    int years,weeks,days;
    printf("Number of days: ");
    scanf("%d",&days);
    years=days/365;
    days=days-(years*365);
    weeks=days/7;
    days=days-(weeks*7);
    printf("Year: %d \nWeeks:%d \nDays:%d\n",years,weeks,days);
}
