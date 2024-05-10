#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=0,second=1,num,count=0,fibo;
    printf("Enter range:");
    scanf("%d",&num);

    while(count<num){

        if(count<=1){
            fibo=count;
        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d\t",fibo);
        count++;
    }

    return 0;
}
