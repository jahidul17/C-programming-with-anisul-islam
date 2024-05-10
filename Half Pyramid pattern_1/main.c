
// Half Pyramid----

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,row,col;
    printf("Enter how many row:");
    scanf("%d",&num);

    for(row=1;row<=num;row++){
        for(col=1;col<=row;col++){
            printf("%c",64+col);
        }
        printf("\n");
    }

    return 0;
}
