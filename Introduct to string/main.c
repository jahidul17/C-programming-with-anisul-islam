#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[6]= {'j','a','h','i','d','\0'}; //'\0' mean null character.
    char s2[]="\nJahidul Islam \
    Khan";// Line break(/)

    printf("%s",s1);
    printf("%s\n",s2);

    //User Input
    char s3[30];
    printf("Enter a string:");
    gets(s3);

    printf("%s",s3);

    return 0;
}
