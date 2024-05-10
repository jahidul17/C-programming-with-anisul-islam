#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[30]="Zahirul Islam ";
    int length=strlen(name);

    // Opening file in reading mode="r".
    // Opening file in writting mode="w".
    //Open for append. Data is added to the end of the file.
    //For learn about https://www.programiz.com/c-programming/c-file-input-output

    file=fopen("test.text","rb");

    if(file==NULL){
        printf("File doesn't exist.");
    }
    else{
        printf("File is opened.\n");
        for(int i=0;i<length;i++){
            fputc(name[i],file);
        }
        printf("File is written successfully.\n");

        fclose(file);
    }


}
