#include <stdio.h>

int main(){

    // ternary operator ? = shorthand for if-else statements

    //(condition) ? value_if_true : value_if_false;

    int x = 7;
    int y = 6;

    int max = (x > y) ? x : y;

    printf("%d\n", max);

    int age = 23;

    printf("%s", (age > 18) ? "adult" : "child");

    return 0;
}