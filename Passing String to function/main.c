#include <stdio.h>
#include <stdlib.h>


void display(char s1[]){
    //printf("%s",s1);

    int i=0;
    while(s1[i]!='\0'){
        printf("%c",s1[i]);
        i++;
    }
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    gets(str);

    display(str);

    return 0;
}
