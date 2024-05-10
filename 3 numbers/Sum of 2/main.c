#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    float average(float, float);
    float division(float, float);



    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);

     float result=division(num1,num2);

    printf("The sum is= %d \n",sum(num1,num2));
    printf("The sum is= %d \n",sub(num1,num2));
    printf("The sum is= %d \n",mul(num1,num2));
    printf("The sum is= %f \n",result);

    printf("Average is: %f\n",average(num1,num2));


}


int sum(int a,int b)
{

    int addition=a+b;

    return addition;

}
int sub(int a,int b)
{
    int subtraction=a-b;
    return subtraction;
}

int mul(int a,int b)
{
    int multiplication=a*b;
    return multiplication;
}

float division(float a, float b)//function definition
{
    float division=a/b;
    return division;
}

float average(float a,float b){
    return ((a+b)/2);
}

