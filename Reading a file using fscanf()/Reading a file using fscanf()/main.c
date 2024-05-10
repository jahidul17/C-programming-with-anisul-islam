#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[50];
    char name1[20];
    char name2[20];
    int age;


    file=fopen("test.text","r");

    if(file==NULL)
    {
        printf("File does not exist.");

    }
    else
    {
        printf("File is opened.\n");

        //fscanf(file pointer ,"formate specifire",&variable);

        fscanf(file,"%s %s %d",&name1,&name2,&age);
        printf("%s %s %d\n",name1,name2,age);
        fclose(file);
    }


}
