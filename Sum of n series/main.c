#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0;
    printf("Enter the last number of series:");
    scanf("%d",&num);

    //1+2+3+4......n
    //1+3+5+7......n
    //2+4+6+8......n

    for(i=2;i<=num;i+=2){

        sum=sum+i;
    }
    printf("Sum of even series:%d\n",sum);

    return 0;
}
