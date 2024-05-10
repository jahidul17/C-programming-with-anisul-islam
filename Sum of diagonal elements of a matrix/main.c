#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10],i,j,sum=0,row,col;
    printf("Enter how many row and column:");
    scanf("%d %d",&row,&col);

    //Insert matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //print matrix
    printf("Matrix of A= \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Sum of diagonal
    printf("Diagonal element of= ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }

    printf("\nSum of diagonal= %d\n",sum);


    return 0;
}
