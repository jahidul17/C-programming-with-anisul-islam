#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[30],array2[30],i,n;

    printf("How many numbers:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    printf("\n");

    //int array1[5]={10,20,30,40,50};

    printf("Array_1 = ");
    for(i=0;i<n;i++){
        printf("%d ",array1[i]);
    }

    for(i=0;i<n;i++){
            array2[i]=array1[i];
    }

    printf("\nArray_2 = ");
    for(i=0;i<n;i++){
        printf("%d ",array2[i]);
    }

    printf("\n");

    return 0;
}
