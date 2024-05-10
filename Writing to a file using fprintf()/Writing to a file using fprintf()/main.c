#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[40];
    int age;

    file=fopen("test.txt","r");

    if(file==NULL)
    {

        printf("File does not exist.\n");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter your name: ");
        gets(name);

        printf("Enter your age: ");
        scanf("%d",&age);

        fputs("\n",file);


        fprintf(file,"Name=%s \nAge=%d\n",name,age);
        printf("File is written successfully.\n");
        fclose(file);

    }
}
