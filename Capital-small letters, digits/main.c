#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],ch;
    int capital,small,digit,i;
    capital=small=digit=i=0;

    printf("Enter a string: ");
    gets(str);

    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
        {
            capital++;
        }
        else if(ch>=97 && ch<=122)
        {
            small++;
        }
        else if(ch>=48 && ch<=57)
        {
            digit++;
        }
        i++;

    }
    printf("Capital letter= %d\n",capital);
    printf("Small letter= %d\n",small);
    printf("Digit= %d\n",digit);


    return 0;
}
