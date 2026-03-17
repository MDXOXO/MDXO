#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter factorial number:");
    scanf("%d",&n);
    int j=1;
    for(i=1;i<=n;++i)
{
    j*=i;
}
printf("factorial is: %d",j);
return 0;
}