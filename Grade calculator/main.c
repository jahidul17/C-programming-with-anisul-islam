#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f",&marks);

    if(marks<0 || marks>100)
    {
        printf("Your marks is invalid.");

    }
    //if(marks>=0 && marks<=100)
    else
    {

        if(marks>=80)
            printf("Congratulation!\nYour grade A+\n");

        else if(marks>=70)
            printf("Your grade A\n");

        else if(marks>=60)
            printf("Your grade A-\n");

        else if(marks>=50)
            printf("Your grade B\n");

        else if(marks>=40)
            printf("Your grade C\n");

        else if(marks>=33)
            printf("Your grade D\n");

        else
            printf("You are fail!");
    }



    return 0;
}
