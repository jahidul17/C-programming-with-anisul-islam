
//1*1 + 2*2 + 3*3 +......n*n
//1*1 + 3*3 + 5*5 +......n*n
//2*2 + 4*4 + 6*6 +......n*n

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,sum=0;
    printf("Enter last digit of series:");
    scanf("%d",&num);

    i=2;
    while(i<=num){
        sum=sum+i*i;
        i+=2;
    }

    printf("Sum of digit = %d",sum);

    return 0;
}
