#include <stdio.h>
#include <stdlib.h>


//Create data type and it is global steucture
struct person{

    int age;
    float salary;
};

int main()
{
    struct person person1={30,5000};    //Direct assignment
    struct person person2,person3;

    //Element variable assignment
    person2.age=35;
    person2.salary=15000;

    //Structure variable assignment
    person3=person2;

    printf("Person1:\n");

    printf("Age= %d\n",person1.age);
    printf("Salary=%f\n",person1.salary);

    printf("\n\nPerson2:\n");

    printf("Age= %d\n",person2.age);
    printf("Salary=%f\n",person2.salary);

    printf("\n\nPerson3:\n");

    printf("Age= %d\n",person3.age);
    printf("Salary=%f\n",person3.salary);

    getch();
}


