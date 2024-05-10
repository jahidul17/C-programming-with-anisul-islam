#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,row,col,transpose[10][10],A[10][10];
    printf("Enter how many row and column:");
    scanf("%d %d",&row,&col);

    //Input matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

      //Convert transpose matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i]=A[i][j];
        }
    }

    //Print matrix
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

    //Printing transpose matrix
    printf("Transpose of A matrix= \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
