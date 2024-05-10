#include <stdio.h>
#include <stdlib.h>

int main()
{
    char target[30],s1[]="Zahidul Islam";

    strcpy(target,s1);

    printf("String = %s\n",s1);
    printf("Copy string= %s",target);

    return 0;
}
