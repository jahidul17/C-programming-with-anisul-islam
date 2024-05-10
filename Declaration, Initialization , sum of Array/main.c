#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num[100], sum=0;// num[]= {10,20,30,40,50};
    printf("How many numbers:");
    scanf("%d\n",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    //scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);

    for(int i=0; i<n; i++)
    {
        sum=sum+num[i];

    }
    printf("Sum of array is = %d\n",sum);
    printf("Avarage of array is = %f\n",(float)sum/n);

    return 0;
}
