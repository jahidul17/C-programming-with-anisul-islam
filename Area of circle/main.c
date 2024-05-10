#include <stdio.h>
#include <stdlib.h>
//#define PI 3.1416
#include<math.h>

int main()
{
    float area, radius;

    printf("Enter radius of circle:");
    scanf("%f",&radius);

    area=M_PI*radius*radius;
    printf("Area of circle: %.3f",area);


    return 0;
}
