#include <stdio.h>

int main(){

    // array = A fixed-size collection of elements of the same data type
    //         (Similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50,60,70,34};
    char grades[] = {'A','B','C','D','F'};
    char name[] = "Easwar";

    // int ;

    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}