#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char ch[20];
    char name[20];
    int age;


    file=fopen("test.text","r");

    if(file==NULL)
    {
        printf("File does not exist.");

    }
    else
    {
        printf("File is opened.\n");

       while(!feof(file))
        {
            //fgets(variable,size,file pointer);
            fgets(ch,30,file);//get read per line.
            printf("%s",ch);

        }



        fclose(file);
    }


}
