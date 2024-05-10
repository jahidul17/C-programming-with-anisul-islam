#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[40];

    file=fopen("test.txt","a");

    if(file==NULL){

        printf("File does not exist.");
    }
    else{
        printf("File is opened.\n");
        printf("Enter your name: ");
        gets(name);

        ///fputs(string,pointer file);
        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully.\n");

    }


}
