#include <stdio.h>
#include <stdlib.h>

int main()
{
    float farenheit,c;
    printf("Enter farenheit:");
    scanf("%f",&farenheit);

    c=(farenheit-32)/1.8;

    printf("Celcius degree is :%.2f\n",c);

    return 0;
}
