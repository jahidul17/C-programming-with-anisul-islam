
// Armstrong---

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,finalnum,initial,r,sum=0;
    printf("Enter initial number:");
    scanf("%d",&initial);

    printf("Enter final number:");
    scanf("%d",&finalnum);

    //Initial to final count armstrong.

    for(int i=initial; i<=finalnum; i++)
    {

        temp=i;
        while(temp!=0)
        {

            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }

        if(i==sum)
        {
            printf("%d is Armstrong.\n",i);
        }


        sum=0;

    }



    return 0;
}
