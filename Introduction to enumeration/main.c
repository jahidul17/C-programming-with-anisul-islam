#include<stdio.h>

/*
//A enumeration is a user-defined data type that consists of integral constants.
enum days_of_week{
    Sun,Mon,Tue,Wed,Thu,Fri=70,Sat //Then Sat=71;
};

int main(){
    enum days_of_week day1,day2;

    day1=Fri;
    day2=Mon;

    int diff=day1-day2;

    printf("%d\n",day1);
    printf("%d\n",day1);
    printf("%d\n",diff);

}*/


enum State {WORKING = 0, FAILED, FREEZED};
enum State currState = 1;

enum State FindState()
{
    return currState;
}

int main()
{
    (FindState() == FAILED)? printf("WORKING"): printf("NOT WORKING");
    return 0;
}
