#include <stdio.h>
#include <stdlib.h>
double triangleArea(double,double);//When declare function after main function.

int main()
{
    double  result,height,base;

    printf("Enter base and height: ");
    scanf("%lf %lf",&base,&height);

    result=triangleArea(base,height);

    printf("Area of triangle: %.3lf\n",result);

    return 0;
}

double triangleArea(double a,double b){

    return 0.5*a*b;
}
