#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a value:");
    scanf("%d",&num);

    if(num%2==0){
        printf("This value is even.");
    }
    else
        printf("This value is odd.");

    return 0;
}
