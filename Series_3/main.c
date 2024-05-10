
//1.2 + 2.3 + 3.4 +......+ n1*n2
//1.3 + 2.5 + 3.7 +......+ n1*n2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,a=1,b=3,sum=0;
    printf("Like 1.3 + 2.5 + 3.7 +......+ n1*n2\n");
    printf("Enter two digit n1 and n2:");
    scanf("%d %d",&n1,&n2);

    while(a<=n1 && b<=n2){

        sum=sum+a*b;
        a++;
        b+=2;
    }


    printf("Summation is: %d",sum);

    return 0;
}
