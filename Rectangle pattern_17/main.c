#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,n;
    printf("Enter how many line:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){

            if(row==1 || row==n || col==1 || col==n){
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
