#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three value:");
    scanf("%d %d %d",&a, &b, &c);

    if(a>b){
        if(a>c){
            printf("Largest value is a=%d\n",a);
        }
    }
    else if(b>c){
        if(b>a){
            printf("Largest value is b=%d\n",b);
        }
    }
    else{
        printf("largest value is c=%d\n",c);
    }

    return 0;
}
