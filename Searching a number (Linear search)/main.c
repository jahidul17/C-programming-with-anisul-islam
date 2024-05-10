#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value,position=-1,i,n,num[20];

    printf("How many value:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    // int num[]={10,40,8,30,67,85,90};

    printf("Enter the value you want to search:");
    scanf("%d",&value);

    for(i=0;i<n;i++){

        if(value==num[i]){
            position=i+1;
            break;
        }
    }

    if(position==-1){
        printf("Value is not found.\n");
    }
    else{
        printf("The [%d] position of value is = %d\n",value,position);
    }

    return 0;
}
