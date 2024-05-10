#include <stdio.h>
#include <stdlib.h>

void swapping(int *ptr1,int *ptr2){
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("After swapping: %d %d\n",*ptr1,*ptr2);

}

int main()
{
    int x=10,y=20;

    printf("Before swapping: %d %d\n",x,y);

    swapping(&x,&y);
    return 0;
}
