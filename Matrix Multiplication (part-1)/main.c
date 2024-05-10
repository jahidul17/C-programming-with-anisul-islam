#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first [10][10],second [10][10],result [10][10],i,j,r1,r2,c1,c2,k,sum=0;

    printf("Enter row and column for first matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and column for second matrix:");
    scanf("%d %d",&r2,&c2);

    while(r1!=c2)
    {
        printf("\nError!! First matrix row is not equal second matrix column.\n");

        printf("Enter row and column for first matrix:");
        scanf("%d %d",&r1,&c1);

        printf("\n");

        printf("Enter row and column for second matrix:");
        scanf("%d %d",&r2,&c2);
    }

    //First matrix input
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    printf("\n\n");
    printf("Now second matrix.\n");

    //Second matrix input
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
    }


    //Multiplication matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<r2; k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }


    printf("\n");
    //Print first matrix
    printf("First matrix= \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");

    }

    printf("\n");
    //Print second matrix
    printf("Second matrix= \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");

    }

    printf("\n");

    //Print multiplication matrix
    printf("Multiplication of matrix= \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}
