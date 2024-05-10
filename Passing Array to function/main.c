#include <stdio.h>
#include <stdlib.h>


void display(int x[])
{
    for(int i=0; i<6; i++)
    {
        printf("%d ",x[i]);
    }
}

int main()
{
    int num[]= {10,20,30,40,50,60};
    display(num);
}
