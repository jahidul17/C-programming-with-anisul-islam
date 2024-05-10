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

    if(person1.age==person2.age && person1.salary==person2.salary){

            printf("Person_1 information equal person_2\n");
    }
    else{
        printf("Person_1 is not equal person_2\n");
    }

}
