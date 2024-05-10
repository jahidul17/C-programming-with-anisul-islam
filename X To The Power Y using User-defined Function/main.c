#include <stdio.h>
#include <stdlib.h>

double calculatePower(double a,double b) //When will be not return type.(void)
{
    double i,result=1;
    for(i=1; i<=b; i++)
    {
        result=result*a;
    }

   //printf("%lf\n",result);
   return result;
}

int main()
{
    double  base,exp,a,b,c,d;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exponent: ");
    scanf("%lf",&exp);

    printf("\n\n\n");

    printf("Enter base: ");
    scanf("%lf",&a);

    printf("Enter exponent: ");
    scanf("%lf",&b);

    printf("\n\n\n");

    printf("Enter base: ");
    scanf("%lf",&c);

    printf("Enter exponent: ");
    scanf("%lf",&d);

    //calculatePower(base,exp);
    printf("\n%.3lf\n",calculatePower(base,exp));
    printf("%.3lf\n",calculatePower(a,b));
    printf("%.3lf\n",calculatePower(c,d));

    return 0;
}
