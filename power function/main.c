#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,power; float result;
    printf("Enter a value:");
    scanf("%d",&num);

    printf("Enter power of value:");
    scanf("%d",&power);

    result=pow(num,power);
    printf("Result of power is: %.2f\n",result);
    return 0;
}
