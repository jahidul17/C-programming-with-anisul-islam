#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    // Opening file in reading mode="r".
    // Opening file in writting mode="w".
    //Open for append. Data is added to the end of the file.
    //For learn about https://www.programiz.com/c-programming/c-file-input-output

    file=fopen("test.txt","w");

    if(file==NULL){
        printf("File doesn't exist.");
    }
    else{
        printf("File is opened.");
        fclose(file);
    }

    getch();
}
