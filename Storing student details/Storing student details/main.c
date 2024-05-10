#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char name[30];
    int age,phone,num;

    file=fopen("Student.text","a");

    if(file==NULL){
        printf("File does not exist.");
    }
    else{
        printf("File is opened.\n");

        printf("Enter number of students: ");
        scanf("%d",&num);

        for(int i=1;i<=num;i++){
            printf("Enter student name: ");
            scanf("%s",&name);

            printf("Enter student age: ");
            scanf("%d",&age);

            printf("Enter student phone: ");
            scanf("%d",&phone);

            fprintf(file,"\n%s\t\t%d\t%d",name,age,phone);      }

        fclose(file);

    }
}
