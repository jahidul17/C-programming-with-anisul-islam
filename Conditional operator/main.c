#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result,a,b,c;
    printf("Enter three value:");
    scanf("%d %d %d",&a,&b,&c);

    result=((a>b && a>c)?a:(b>c && b>a)?b:c);

    printf("Largest value is: %d",result);

    return 0;
}
