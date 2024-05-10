#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count=0;
    printf("Enter any digit:");
    scanf("%d",&num);

    while(num!=0){

        num=num/10;
        ++count;
    }

    printf("Number of digit is: %d",count);


    return 0;
}
