#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum=0;

    printf("Enter value of x=");
    scanf("%d",&x);

    printf("Enter value of y=");
    scanf("%d",&y);

    int *ptr1=&x,*ptr2=&y;

    sum=*ptr1 + *ptr2;

    printf("Addition of pointer: %d\n",sum);
    return 0;
}
