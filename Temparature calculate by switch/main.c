#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choise;
    float farenheit,c;
    float celcius,F;
    printf("Temperature conversion menu.\n");
    printf("1. Fahrenheit to Celsius.\n");
    printf("1. Celsius to Fahrenheit.\n");
    printf("Enter your chose:");
    scanf("%d",&choise);

    switch(choise)
    {

    case 1:
    {

        printf("Enter Fahrenheit:");
        scanf("%f",&farenheit);

        c=(farenheit-32)/1.8;

        printf("Celsius degree is :%.2f\n",c);
        break;
    }
    case 2:
    {

        printf("Enter centigrade:");
        scanf("%f",&celcius);

        F= (celcius * 1.8)+32;
        printf("Fahrenheit degree is:%.2f",F);
        break;
    }
    default:
        printf("Not correct option.\n");
    }

    return 0;
}
