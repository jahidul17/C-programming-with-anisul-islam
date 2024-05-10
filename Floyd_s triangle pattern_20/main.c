#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,count=0,n;
    printf("Enter how many line:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){

        for(col=1;col<=row;col++){
            printf("%d ",++count);
        }
        printf("\n");
    }
    return 0;
}
