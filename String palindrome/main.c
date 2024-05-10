#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="madam ",s2[50];
    int j,i=0,len=0;
    printf("%s\n",s1);

             /*
             strcpy(s2,s1);
             strrev(s2);    //Use Libary function.
             printf("%s",s2);
             */

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    for(j=0,i=len-1; i>=0; j++,i--)
    {
        s2[j]=s1[i];

    }
    s2[j]='\0';

    printf("%s\n",s2);

    int d=strcmp(s1,s2);

    if(d==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome.");
    }


    return 0;
}
