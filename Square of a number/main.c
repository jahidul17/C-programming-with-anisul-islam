#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result,num;

    printf("Enter a integer number: ");
    scanf("%d",&num);

    result=square(num);
    printf("Square is= %d ",result);

    return 0;
}

int square(int a)
{
    return a*a;

}
