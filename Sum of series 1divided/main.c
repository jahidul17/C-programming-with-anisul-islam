#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num,sum=0;
    int i;
    printf("Enter last digit of series:");
    scanf("%lf",&num);

    for(i=1;i<=num;i++){

        sum=sum+(double)1/i;

        if(i==1)
            printf("1 + ");
        else
            printf("1/%d + ",i);
    }

    printf("\b\b= %.3lf\n",sum);

    return 0;
}
