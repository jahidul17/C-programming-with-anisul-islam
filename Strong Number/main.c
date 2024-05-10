//Check strong number;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int finalnum,temp,reminder,sum=0;
    printf("Enter any number:");
    scanf("%d",&finalnum);

    for(int j=1;j<=finalnum;j++){

         temp=j;

    while(temp!=0){

        reminder=temp%10;

        int fact=1;
        for(int i=1;i<=reminder;i++){

            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(j==sum)
        printf("%d is strong number.\n",j);

    sum=0;

    }





    return 0;
}
