#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,num;
    printf("Enter last digit of series:");
    scanf("%d",&num);

    a=2;

    while(a<=num){

        printf("%d\t",a);
        a+=2;
    }


    return 0;
}
