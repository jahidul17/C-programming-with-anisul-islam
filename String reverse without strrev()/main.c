#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Zahidul Islam",s2[30];
    int j,i=0,len=0;

    printf("%s\n",s1);

    while(s1[i]!='\0'){
        len++;
        i++;
    }


   for(j=0,i=len-1;i>=0;j++,i--){
        s2[j]=s1[i];

   }
   s2[j]='\0';

    printf("%s",s2);

    return 0;
}
