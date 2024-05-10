
//Factorial---

#include <stdio.h>
#include <stdlib.h>

int main()
{


    while(1)    //Infiniti
    {
        int fact=1,n;
        printf("Enter positive number:");
        scanf("%d",&n);

        for(int i=n; 1<=i; i--)
        {

            fact=fact*i;
        }
        printf("%d of factorial is: %d\n",n,fact);


    }

    return 0;

}
