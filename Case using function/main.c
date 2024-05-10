//Case conversation.
#include<stdio.h>
int main(){

    char upper,lower;
    printf("Enter lower case:");
    scanf("%c",&lower);

    upper= toupper(lower);//or tolower
    printf("%c of upper case is:%c",lower,upper);

}
