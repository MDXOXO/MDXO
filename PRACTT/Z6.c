#include <stdio.h>
#include <math.h>
int main()
{
    int s, a, b, c;
    scanf("Enter side:%d",&s);
    scanf("Enter a,b,c:%d%d%d",&a,&b,&c);
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle:%f\n",area);
}
