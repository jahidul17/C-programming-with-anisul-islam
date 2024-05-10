#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
     if(n==1)   //Base case that means recursion end time
    {
        return 1;
    }
    else
    {
        return n*fact(n-1); //Recursion of fact
    }
}


int main()
{
    int result=fact(5);

    printf("Factorial of 5: %d",result);

    return 0;
}
