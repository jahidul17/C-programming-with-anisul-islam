#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celcius,F;
    printf("Enter centigrade:");
    scanf("%f",&celcius);

    F= (celcius * 1.8)+32;
    printf("Farenheit degree is:%.2f",F);
    return 0;
}
