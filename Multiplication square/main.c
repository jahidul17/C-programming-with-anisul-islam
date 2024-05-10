
//1^2*2^2*3^2*4^2.........n^2
//1^3*2^3*3^3*4^3.........n^3

//1^2*3^2*5^2*7^2.........n^2
//1^3*3^3*5^3*7^3.........n^3

//2^2*4^2*6^2*8^2.........n^2
//2^3*4^3*6^3*8^3.........n^3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,result=1;
    printf("Enter last digit of series:");
    scanf("%d",&num);

    for(i=1;i<=num;i+=2){

        result=result*i*i;
    }

    printf("Multiplication result is = %d\n",result);

    return 0;
}
