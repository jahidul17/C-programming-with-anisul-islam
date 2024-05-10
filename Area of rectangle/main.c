#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length, width, area;

    printf("Enter length and width:");
    scanf("%lf %lf",&length,&width);

    area=length*width;
    printf("Area of rectangle:%.3lf\n",area);


    return 0;
}
