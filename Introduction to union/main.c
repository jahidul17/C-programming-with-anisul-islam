#include <stdio.h>
#include <stdlib.h>

//All the union members share the same memory location
union test{
    int x,y;

};

int main()
{
    union test t1,t2;
    t1.x=10;

    printf("X_1 value is: %d\n",t1.x);
    printf("Y_1 value is: %d\n",t1.y);


    t2.y=20;

    printf("X_2 value is: %d\n",t2.x);
    printf("Y_2 value is: %d\n",t2.y);
    return 0;
}
