#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    if(num>0)
        printf("It is positive number.\n");
    else if(num<0)
        printf("It is negative number.\n");
    else
        printf("It is zero.");

    return 0;
}
