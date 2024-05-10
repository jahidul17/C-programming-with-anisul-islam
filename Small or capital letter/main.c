#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter any key:");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("Small letter.\n");
    }

    else if(ch>='A' && ch<='Z'){
        printf("Capital letter.\n");
    }
    else{
        printf("Not letter.\n");
    }
    return 0;
}
