#include <stdio.h>
#include <stdlib.h>

int main()
{
      int num,row,col;
    printf("Enter how many row:");
    scanf("%d",&num);

    for(row=num; 1<=row; row--)
    {
        for(col=1;col<=num-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",row%2);
        }

        printf("\n");
    }
    return 0;
}
