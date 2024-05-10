// C program to check if a number is
// even or not using goto statement
#include <stdio.h>

// function to check even or not

void evenorodd(int num)
{

    if(num%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:
    printf("%d is even.",num);
    return;

odd:
    printf("%d is odd.",num);

}

int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    evenorodd(number);

}
