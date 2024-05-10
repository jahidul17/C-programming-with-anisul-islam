#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Zahidul Islam",s2[30];

    strupr(s1);
    strcpy(s2,s1);
    strlwr(s2);

    printf("%s\n",s1);
    printf("%s",s2);


    return 0;
}
