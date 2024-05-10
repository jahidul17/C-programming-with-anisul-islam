
//1*2*3*4.........n
//1*3*5*7.........n
//2*4*6*8.........n

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,result=1;
    printf("Enter last digit of series:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){

        result=result*i;
    }

    printf("Multiplication result is = %d\n",result);

    return 0;
}
