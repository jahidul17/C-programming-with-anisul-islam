#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    printf("%c of Upper case is: %c",ch,ch-32);
    return 0;
}
