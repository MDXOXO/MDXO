#include<stdio.h>
int main()
{
    int days, year, weeks, day;
    printf("Enter no. of days: ");
    scanf("%d",&days);
    year=days%12;
    weeks=(days%12)/7;
    day=days%7;;
    printf("year: %d\n",year);
    printf("weeks: %d\n",weeks);
    printf("days: %d\n",day);
    return 0;
}