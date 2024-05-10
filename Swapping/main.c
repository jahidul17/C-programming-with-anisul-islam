
//Swaping-----

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, temp;

    printf("Enter first and second value:");
    scanf("%d %d",&num1,&num2);

    printf("Before swap %d and %d \n",num1,num2);
    /*
    temp=num1;
    num1=num2;
    num2=temp;
    */
    num1=num1-num2;
    num2=num2+num1;
    num1=num2-num1;

    printf("After swapping %d and %d \n",num1,num2);


    return 0;
}
