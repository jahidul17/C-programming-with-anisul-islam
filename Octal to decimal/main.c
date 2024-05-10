#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter decimal value:");
    scanf("%d",&num);
    // Octal for %o, Hexadecimal for %x, Decimal for %d
    printf("%d of Octal value is:%o",num,num);


    return 0;
}
