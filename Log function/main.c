#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double num;double result;
    printf("Enter a value:");
    scanf("%lf",&num);

    result=log(num);//log10(x), exp(x), sin(x);
    printf("%lf of log value is: %.2lf\n",num,result);
    return 0;
}
