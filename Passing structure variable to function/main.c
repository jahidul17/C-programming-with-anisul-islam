#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[30];
    int age;
    int salary;

};

void display(struct Person p)
{
    printf("Name= %s\n",p.name);
    printf("Age= %d\n",p.age);
    printf("salary= %d\n\n\n",p.salary);
}

int main()
{
    struct Person person1,person2;

    strcpy(person1.name,"Zahidul Islam");
    person1.age=23;
    person1.salary=50000;
    display(person1);


    strcpy(person2.name,"Mofizur Rahman");
    person2.age=50;
    person2.salary=500000;
    display(person2);
}
