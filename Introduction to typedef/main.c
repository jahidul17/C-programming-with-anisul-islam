#include <stdio.h>
#include <stdlib.h>

//user defined data type.
struct book{
    char name[20];
    int price;

};


int main()
{
    typedef char Letter;
    typedef int Number;

    Letter ch='A';
    Number num=55;

    printf("%c\n",ch);
    printf("%d\n\n",num);

    //User defined data type.
    typedef struct book books;

    books b={"Amar jibonkotha",350};

    printf("Book name:%s\n",b.name);
    printf("Book price:%d\n",b.price);
    return 0;
}
