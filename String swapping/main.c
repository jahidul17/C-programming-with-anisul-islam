#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[50]="Bangladesh";
    char s2[50]="Pakistan",temp[50];

    printf("Before swapping= \n");
    printf("\tString_1= %s\n",s1);
    printf("\tString_2= %s\n\n\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("After swapping= \n");
    printf("\tString_1= %s\n",s1);
    printf("\tString_2= %s\n",s2);

    return 0;
}
