#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;

    //char name[30];
    //int age;

    char ch;

    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exist.\n");

    }
    else
    {

        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        fclose(file);

        /*
         printf("File is opened.\n");

        printf("Enter your name: ");
        gets(name);

        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name: %s\nAge: %d\n",name,age);
        printf("Enter your name: ");
        fflush(stdin);
        gets(name);

        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name: %s\nAge: %d\n",name,age);

        printf("File is written successfully.\n\n");
        fputs("\n",file);
        */




    }
    getch();

}
