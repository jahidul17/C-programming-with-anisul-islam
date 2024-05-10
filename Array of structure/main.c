#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
    int salary;
};

int main()
{
    struct Person person[4];

    for(int i=0; i<4; i++)
    {
        printf("Enter information for person_%d\n",i+1);

        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);

        printf("Enter Age: ");
        scanf("%d",&person[i].age);

        printf("Enter Salary: ");
        scanf("%d",&person[i].salary);

    }

    printf("\n\n");

    for(int i=0; i<4; i++)
    {
        printf("Information for person_%d",i+1);
        printf("\nName: %s\n",person[i].name);
        printf("Age: %d\n",person[i].age);
        printf("Salary: %d\n\n\n",person[i].salary);

    }

    return 0;
}
