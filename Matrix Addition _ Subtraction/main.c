#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter how many row and column:");
    scanf("%d %d",&m,&n);

    //Input A matrix
    printf("Enter element for A matrix.\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d] [%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    //Input B matrix
    printf("Enter element for B matrix.\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("B[%d] [%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    //Print A matrix
    printf("A = ");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    //Print B matrix
    printf("B = ");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Adding of A+B matrix
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];

        }
    }

    //Printing A+B matrix
    printf("A+B = ");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


     // Subtract of A-B matrix
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            C[i][j]=A[i][j]-B[i][j];

        }
    }

    //Printing A-B matrix
    printf("A-B = ");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
