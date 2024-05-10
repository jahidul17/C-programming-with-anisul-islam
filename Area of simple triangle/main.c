//Write a program thats calculate area of triangle.

#include <stdlib.h>

int main()
{
    float base,height,area;
    printf("Enter base and height:");
    scanf("%f %f",&base,&height);

    area= (float)1/2 * base * height; //type casting

    printf("Triangle area of %.2f\n",area);

    return 0;
}
