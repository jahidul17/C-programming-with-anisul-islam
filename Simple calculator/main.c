#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int num1, num2;
    printf("Enter operator (+, -, *, /): ");
    scanf("%c",&op);

    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);

    switch(op){

    case '+':{
        printf("%d + %d is = %d\n",num1,num2,num1+num2);
        break;
    }
    case '-':{
        printf("%d - %d is = %d\n",num1,num2,num1-num2);
        break;
    }
    case '*':{
        printf("%d * %d is = %d\n",num1,num2,num1*num2);
        break;
    }
    case '/':{
        printf("%d / %d is = %d\n",num1,num2,num1/num2);
        break;
    }

    default:
        printf("Invalid operator!\n");
    }


}
