#include <stdio.h>
#include <stdlib.h>

int main()
{
    double base,exp,result=1;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exponent: ");
    scanf("%lf",&exp);

    //result=pow(base,exp);

    for(int i=1;i<=exp;i++){
        result=result*base;
    }

    printf("Resullt=%.2lf \n",result);

    return 0;
}
