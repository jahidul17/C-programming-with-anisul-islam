
//sum=1-2+3-4+5-6.........n
//sum=(1+3+5...)-(2+4+6...).........n

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,result,even=0,odd=0;;
    printf("Enter last term:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){

        if(i%2!=0){
            odd=odd+i;
        }
        if(i%2==0){
            even=even+i;
        }
    }
    result=even-odd;
    printf("Result=%d",result);

    return 0;
}
