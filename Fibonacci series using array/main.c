#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num[30],i;
    printf("How many fibonacci numbers:");
    scanf("%d",&n);
    //0 1 1 2 3 5 8 13......
    num[0]=0;
    num[1]=1;

    for(i=2;i<n;i++){
        num[i]=num[i-1] + num[i-2];
    }

    printf("\n");

    for(i=0;i<n;i++){

        printf("%d ",num[i]);
    }

    printf("\n");
    return 0;
}
