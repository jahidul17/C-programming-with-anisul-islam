#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,len;
    char s1[100]="Zahidul Islam",s2[]=" Khan";

    i=0;len=0;
    while(s1[i]!='\0'){
        len++;
        i++;
    }

    //adding s1 len with s2
    j=0;
    while(s2[j]!='\0'){
        s1[len+j]=s2[j];
        j++;
    }
    printf("%s",s1);

    return 0;
}
