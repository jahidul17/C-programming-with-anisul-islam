#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,x1,x2,x;

    printf("Enter three value a, b, c:");
    scanf("%f %f %f",&a,&b,&c);

    d=sqrt((b*b)-4*a*c);

    if(d==0){
        x=-b/(2*a);
        printf("Roots are real and equal & are : %.2f\n",x);
    }
    else if(d>0){
        x1=-b+d/(2*a);
        x2=-b-d/(2*a);

        printf("Roots are and unequal & are x1 = %.2f\n",x1);
        printf("Roots are and unequal & are x2 = %.2f\n",x2);
    }
    else
        printf("The roots are imaginary.");

    return 0;
}
