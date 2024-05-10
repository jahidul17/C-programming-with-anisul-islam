#include <stdio.h>
#include <stdlib.h>

void display(int x[])
{

    printf("\n\n");

    int max=x[0];
    for(int i=1; i<=6; i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    printf("Maximum value is: %d",max);

}

int main()
{
    int num[]= {20,15,40,46,30,32};
    int i=0;//print array
    for( i=0; i<6; i++)
    {

        printf("%d ",num[i]);
    }

    display(num);

    return 0;
}
