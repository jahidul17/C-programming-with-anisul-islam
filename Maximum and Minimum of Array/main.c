#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num[100];

    printf("How many numbers:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d\n",&num[i]);
    }

    int max=num[0];
    int min=num[0];

    for(int i=0;i<n;i++){

       if(max<num[i]){
        max=num[i];
       }

       if(min>num[i]){
        min=num[i];
       }

    }

    printf("Maximum value of array = %d\n",max);
    printf("Minimum value of array = %d\n",min);

    return 0;
}
