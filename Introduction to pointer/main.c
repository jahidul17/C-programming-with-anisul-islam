#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=5;
    int *p=&num;
    //p=&num;

    printf("Value of num= %d\n",num);
    printf("Address of Value num= %d\n",&num);
    printf("Address of Value unsigned= %u\n",&num);//u for unsigned value .
    printf("Address of Value Hexadecimal= %x\n",&num);//x for hexadecimal value.
    printf("Value of P (&num)= %d\n",p);
    printf("Address of Value P= %d\n",&p);
    printf("Pointer of value p= %d\n",*p);

    return 0;
}
