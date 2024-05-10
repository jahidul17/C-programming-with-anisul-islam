#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,x=10,y=20;
    int *ptr1=&x,*ptr2=&y;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("X= %d\n",*ptr1);
    printf("Y= %d\n",*ptr2);
    return 0;
}
