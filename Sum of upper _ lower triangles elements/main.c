#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10],i,j,sum_upper=0,sum_lower=0,row,col;
    printf("Enter how many row and column:");
    scanf("%d %d",&row,&col);

    //Insert matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
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

    //Sum of upper triangle element
    printf("Upper triangle element are= ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i<j)
            {
                printf("%d ",A[i][j]);
                sum_upper=sum_upper+A[i][j];
            }

            if(i>j)
            {
                sum_lower=sum_lower+A[i][j];
            }
        }
    }

    printf("\nSum of upper triangle element= %d\n",sum_upper);

    printf("Sum of lower triangle element= %d\n",sum_lower);

    return 0;
}
