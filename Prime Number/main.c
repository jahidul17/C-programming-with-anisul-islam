
// Prime Number----

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,num,co=0;

    printf("Enter a positive number:");
    scanf("%d",&num);

    for(i=2; i<=num; i++)
    {
        int count=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }

        }
        if(count==0)
        {
            ++co;
            printf("%d is prime number.\n",i);
        }

    }

    printf("\n\nTotal prime number is = %d\n\n",co);


    return 0;
}
