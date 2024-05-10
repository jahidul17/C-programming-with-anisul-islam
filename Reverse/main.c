#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,num,r,sum=0;
    printf("Enter any number:");
    scanf("%d",&num);

    temp=num;

    while(temp!=0){

        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }

    printf("%d Reverse is: %d\n",num,sum);

    return 0;
}
