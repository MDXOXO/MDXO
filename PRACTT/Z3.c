#include<stdio.h>
int main()
{
    float w1, w2;
    printf("Enter Weight 1 and weight 2(in kg):");
    scanf("%f,%f", &w1 , &w2);
    printf("Enter number of purchase of Weight 1 amd weight 2:");
    float n1,n2;
    scanf("%f,%f", &n1 , &n2);
    float averageval;
    averageval=((w1*n1)+(w2*n2))/(n1+n2);
    printf("Average weight of the purchase is: %.2f kg", averageval);
    return 0;
}