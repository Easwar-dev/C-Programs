#include <stdio.h>

typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATRUDAY = 7
}Day;

int main(){

    // enum = A user-defined data type that consists
    //        of a set of named integer constants.
    //        Benefit: Replaces numbers with readable names

    Day today = MONDAY;

    if(today == SUNDAY || today == SATRUDAY){
        printf("It's the weekend");
    }else{
        printf("It's a weekday");
    }


    return 0;
}