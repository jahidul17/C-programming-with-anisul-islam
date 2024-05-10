#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,area,s;

    printf("Enter three arms of triangle:");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt (s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle is: %.3lf",area);

    return 0;
}
