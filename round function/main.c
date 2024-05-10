#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double num;double result;
    printf("Enter a value:");
    scanf("%lf",&num);

    result=round(num);//make one nearest value.
    printf("%lf of round value is: %.2lf\n",num,result);

    result=trunc(num);//remove floating value.
    printf("%lf of trunc value is: %.2lf\n",num,result);

    result=ceil(num);//nearest upper integer value.
    printf("%lf of ceil value is: %.2lf\n",num,result);

    result=floor(num);//nearest upper integer value.
    printf("%lf of floor value is: %.2lf\n",num,result);

    return 0;
}
