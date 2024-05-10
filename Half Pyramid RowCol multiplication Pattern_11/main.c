#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,n;

    printf("How many line or row:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){

            printf("%d ",row*col);
        }
     printf("\n");
    }

    return 0;
}
