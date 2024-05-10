#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Zahidul Islam",s2[]=" Jahan Khan";

    printf("%s\n",s1);
    printf("%s\n",s2);

    strcat(s1,s2);//adding s1 in s2.


    printf("%s\n",s1);

    strcat(s2," Born on 2000");
    printf("%s\n",s2);


    return 0;
}
