#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,r,temp,sum=0;
    printf("Enter any number:");
    scanf("%d",&num);

    while(num!=0){

        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of digit: %d\n",sum);

    return 0;
}
