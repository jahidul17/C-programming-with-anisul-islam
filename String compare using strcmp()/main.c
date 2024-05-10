#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]="Zahidu Islam";
    char s2[]="Zahidu Islam";


    int temp=strcmp(s1,s2);

    if(temp==0){
        printf("String is equal.");
    }
    else{
        printf("String is not equal.");
    }

    return 0;
}
