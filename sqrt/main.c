#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;float result;
    printf("Enter a value:");
    scanf("%d",&num);

    result=sqrt(num);
    printf("%d of root value is: %.2f\n",num,result);
    return 0;
}
