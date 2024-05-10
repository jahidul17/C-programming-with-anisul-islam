#include <stdio.h>
#include <stdlib.h>

union test1{
    int x,y;

};

union test2{
    char name[20];

};

union test3{
    char name[20];
    int age[25];
    double salary;

};

struct test4{
    char name[20];
    int age;
    double salary;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Size of t1= %d\n",sizeof(t1));
    printf("Size of t2= %d\n",sizeof(t2));
    printf("Size of t3= %d\n",sizeof(t3));
    printf("Size of t3= %d\n",sizeof(t4));

    return 0;
}
