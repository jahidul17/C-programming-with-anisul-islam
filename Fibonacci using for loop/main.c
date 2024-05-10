#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1=0,f2=1,fibo,i,num;
    printf("Enter range:");
    scanf("%d",&num);

    printf("%d\t%d ",f1,f2);

    fibo=f1+f2;

    for(i=3;i<=num;i++){

        fibo=f1+f2;
        printf("\t%d\t",fibo);
        f1=f2;
        f2=fibo;
    }

    return 0;
}
