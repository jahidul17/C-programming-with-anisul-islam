#include <stdio.h>
#include <stdlib.h>

//Create data type and it is global steucture
struct person{

    int age;
    float salary;
};


int main()
{
    struct person person1,person2;

    person1.age=27;
    person1.salary=12000;

    person2.age=35;
    person2.salary=15000;

    printf("Person1:\n");

    printf("Age= %d\n",person1.age);
    printf("Salary=%f\n",person1.salary);

    printf("\n\nPerson2:\n");

    printf("Age= %d\n",person2.age);
    printf("Salary=%f\n",person2.salary);

    getch();
}


