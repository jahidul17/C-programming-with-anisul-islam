#include <stdio.h>
#include <stdlib.h>

int main()
{
      int row,col,n;
    printf("Enter how many line:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        for(col=row-1;1<=col;col--){
            printf("%d ",col);
        }
        printf("\n");
    }


    for(row=n-1;1<=row;row--){
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        for(col=row-1;1<=col;col--){
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}
