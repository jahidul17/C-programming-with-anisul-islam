#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,result;
    printf("Enter negative value:");
    scanf("%d",&num);

    result=abs(num);
    printf("%d of Absolute value is: %d\n",num,result);

    return 0;
}
