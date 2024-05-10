#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i=1; i<=20; i++){

        if(i%3==0)
            continue;//bypass
        printf("%d\n",i);

        if(i==10)
            break;//loop terminate
    }

    return 0;
}
