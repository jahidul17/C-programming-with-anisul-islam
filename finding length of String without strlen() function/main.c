#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Zahidul islam";

    int i=0,len=0;


    while(s1[i]!='\0')
    {
        ++len;
        printf("%d",len);
        printf("String length %c is= %d \n",s1[i],len);
        i++;
    }


    return 0;
}
